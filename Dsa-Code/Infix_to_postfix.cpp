#include <bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
}

bool operators(char c)
{
    if (c == '+' || c == '*' || c == '-' || c == '/')
        return true;
    return false;
}

string In_to_pos(string infix)
{
    string s;
    stack<char> st;
    for (int i = 0; i < infix.size(); i++)
    {
        if (!operators(infix[i]))
            s += infix[i];
        else
        {
            if (st.empty())
                st.push(infix[i]);
            else
            {
                if (precedence(infix[i]) > precedence(st.top()))
                    st.push(infix[i]);
                else
                {
                    while (!st.empty())
                    {
                        s += st.top();
                        st.pop();
                    }
                    st.push(infix[i]);
                }
            }
        }
    }
    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }
    return s;
}

int main()
{
    string infix;
    cin >> infix;
    string postfix = In_to_pos(infix);
    cout << postfix << '\n';
    return 0;
}