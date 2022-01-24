#include <iostream>
using namespace std;
#define MAX 10

class stack
{
public:
    int s[MAX], top = -1;
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
            cout << s[top] << endl;
            //delete s[top];
            top--;
        }
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
            cout << s[i] << "\t";
    }
};
int main()
{
    stack s;
    int e, n;
    cout << "Enter the number of elements to be inserted into the stack" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        s.push(e);
    }
    s.display();
    cin >> e;
    s.push(e);
    // s.pop();
    // s.display();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    return 0;
}