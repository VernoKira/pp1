#include<iostream>
#include<stack>

using namespace std;

bool brackets(string s)
{
    stack <char> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if(s[i] == ')')
            {
                st.pop();
            }
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin >> s;

    if(brackets(s) == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}