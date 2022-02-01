#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

vector<int> bubbleSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
        for (int j = 0; j < arr.size() - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
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
    vector<int> res = bubbleSort(arr);
    cout << "the sorted array is" << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}