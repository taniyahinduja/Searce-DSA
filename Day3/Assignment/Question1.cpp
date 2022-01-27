#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pll> vll;
typedef vector<string> vs;

int main()
{
    int n;
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%lld%lld", &v[i].first, &v[i].second);
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    set<pii> q;
    ll t = v[0].first;
    int it = 0;
    while (it < n || q.size())
    {
        while (it < n && v[it].first <= t)
        {
            q.insert(pii(v[it].second, it));
            ++it;
        }
        if (q.empty())
        {
            t = v[it].first;
        }
        else
        {
            int i = q.begin()->second;
            q.erase(q.begin());
            t += v[i].second;
            sum += t - v[i].first;
        }
    }
    cout << sum / n << endl;
    return 0;
}