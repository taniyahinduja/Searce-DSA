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
            cout << "Underflow" << endl;
        }
        else
        {
            cout << s[top];
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
    stack st;
    string str;
    cout << "Enter the string to be reversed" << endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
        st.push(str[i]);
    for (int i = 0; i < str.length(); i++)
        st.pop();
    return 0;
}