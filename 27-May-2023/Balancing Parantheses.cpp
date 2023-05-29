#include<bits/stdc++.h>
using namespace std;



int main(){
   // write your code here
    int t;
    cin>>t;
    while(t-->0)
    {
        string s;
        cin>>s;
        stack<char>stk;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                stk.push(s[i]);
            }
            else if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
                if(stk.empty())
                {
                    stk.push(s[i]);
                }
                else if((s[i]==')' && stk.top()=='(') || (s[i]=='}' && stk.top()=='{') || (s[i]==']' && stk.top()=='[')  )
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
        }
        if(stk.empty())
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        cout<<"\n";
    }
    return 0;
}