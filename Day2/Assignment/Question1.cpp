#include <iostream>
#include <vector>
using namespace std;
#define MAX 100000

class stack
{
public:
    long int s[MAX];
    int top = -1;
    void push(int e)
    {
        if (top >= MAX - 1)
            cout << "Stack overflow" << endl;
        else
        {
            top++;
            s[top] = e;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            //cout<<s[top]<<endl;
            //delete s[top];
            top--;
        }
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
            cout << s[i] << "\t";
    }
    int getMax()
    {
        int top2, max;
        top2 = top;
        max = s[top];
        for (int i = top2; i > 0; i--)
            if (s[i] > max)
                max = s[i];
        return max;
    }
};
int main()
{
    stack s;
    int n, j, k;
    vector<int> res;
    cout << "Enter the number of operations to be performed" << endl;
    cin >> n;
    cout << "\nEnter the operations" << endl;
    while (n > 0)
    {
        cin >> j;
        switch (j)
        {
        case 1:
            cin >> k;
            s.push(k);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            res.push_back(s.getMax());
            break;
        }
        n--;
    }
    cout << "\nOutput is:" << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
    return 0;
}