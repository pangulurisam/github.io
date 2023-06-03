#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   // write your code here
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll sum1=0;
        for(ll i=0;i<n-1;i++)
        {
            cin>>v[i];
            sum1=sum1^v[i];
        }
        ll sum2=0;
        for(ll i=1;i<=n;i++)
        {
            sum2=sum2^i;
        }
        ll ans=sum1^sum2;
        cout<<ans<<"\n";
    }
    return 0;
}