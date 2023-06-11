#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void twosum(vector<ll>&v, ll n, ll k)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(k-v[i])==mp.end())
        {
            mp[v[i]]=i;
        }
        else
        {
            cout<<mp[k-v[i]]<<" "<<i;
        }
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t-->0)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        twosum(v,n,k);
    }
    return 0;
}