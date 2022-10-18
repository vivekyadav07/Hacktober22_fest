#include<bits/stdc++.h>
using namespace std;
bool balance_paranthesis(string str)
{
    stack<char>st;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='('||str[i]=='['||str[i]=='{')
            st.push(str[i]);
        else if(st.empty())
                return 0;
          
        else if(str[i]==')'){
            while(!st.empty() && st.top()!='(')
            {
                st.pop();
            }
            st.pop();
        }
        else if(str[i]==']'){
            while(!st.empty() && st.top()!='[')
            {
                st.pop();
            }
            st.pop();
        }
        else if(str[i]=='}'){
            while(!st.empty() && st.top()!='{')
            {
                st.pop();
            }
            st.pop();
        }
    }
    return st.empty();
}
int main()
{
    string str;
    cin>>str;
    cout<<balance_paranthesis(str);
    return 0;
}