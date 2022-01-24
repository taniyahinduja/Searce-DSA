#include <iostream>
#include <vector>
using namespace std;
int* reverseArray(vector<int> P)
{
    int res[P.size()];
    int c = 0;
    for (int i = P.size() - 1; i >= 0; i--)
    {
        res[c] = (int)P[i];
        c++;
    }
    for (int i = 0; i < P.size(); i++)
        cout << res[i] << " ";
    return res;
}
int main()
{
    int Q;
    cout << "Enter the number of elements" << endl;
    cin >> Q;
    vector<int> P(Q);
    for (int i = 0; i < Q; i++)
        cin >> P[i];
    
    int* res = reverseArray(P);
    for (int i = 0; i < Q; i++)
        cout << res[i] << " ";
    return 0;
}