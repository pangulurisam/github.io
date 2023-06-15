#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        unordered_set<ll>s;
        bool flag=false;
        for(auto num:v)
        {
            if(s.find(num)!=s.end())
            {
                flag=true;
                break;
            }
            s.insert(num);
        }
        if(flag==1)
        {
            cout<<"true"<<"\n";
        }
        else
        {
            cout<<"false"<<"\n";
        }
    }
    return 0;
}