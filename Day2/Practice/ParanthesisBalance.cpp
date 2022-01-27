/* 
Reverse a string using push and pop functions in a stack
*/
#include <iostream>
using namespace std;
#define MAX 100

class stack
{
public:
    char s[MAX], top = -1;
    void push(char e)
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
            cout << "Invalid expression" << endl;
        }
        else
        {
            //cout << s[top];
            //delete s[top];
            top--;
        }
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
            cout << s[i] << "\t";
    }
    void isBalanced()
    {
        if (top == -1)
            cout << "Balanced";
        else
            cout << "Unbalanced";
    }
};
int main()
{
    stack st;
    string str;
    int c1 = 0, c2 = 0;
    cout << "Enter the string to be checked" << endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
        if (str[i] == '{')
        {
            st.push(str[i]);
            c1++;
        }
        else if (str[i] == '}')
            st.pop();
    // for (int i = 0; i < str.length(); i++)
    //     if(str[i]=='}')

    st.isBalanced();
    return 0;
}