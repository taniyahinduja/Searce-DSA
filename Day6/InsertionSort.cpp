#include <bits/stdc++.h>
using namespace std;
vector<int> insertionSort(vector<int> arr)
{
    int i, j, key;
    for (int i = 1; i < arr.size(); i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}
int main()
{
    int n;
    cout << "Enter the elements of the vetor (press -1 to exit)" << endl;
    vector<int> arr;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        arr.push_back(n);
    }
    vector<int> res = insertionSort(arr);
    cout << "the sorted array is" << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}