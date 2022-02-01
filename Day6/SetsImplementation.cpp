#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    set<int> a;
    set<int> b;
    set<int>::iterator itr;

    int n, m, i, j, tot = 0, flaga = 1, flagb = 1, k, temp;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        a.insert(temp);
    }

    for (j = 0; j < m; j++)
    {
        cin >> temp;
        b.insert(temp);
    }

    for (k = 1; k <= 100; k++)
    {
        flaga = 1;
        flagb = 1;
        for (itr = a.begin(); itr != a.end(); itr++)
        {
            temp = *itr;
            if (k % temp == 0)
            {
                flaga = 1;
            }
            else
            {
                flaga = 0;
                break;
            }
        }
        for (itr = b.begin(); itr != b.end(); itr++)
        {
            temp = *itr;
            if (temp % k == 0)
            {
                flagb = 1;
            }
            else
            {
                flagb = 0;
                break;
            }
        }
        if (flaga == 1 && flagb == 1)
        {
            tot++;
        }
    }
    cout << tot;
    return 0;
}