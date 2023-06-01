#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   // write your code here
    ll t;
    cin>>t;
    while(t-->0)
    {
        ll n;
        cin>>n;
        vector<ll> arr;
        ll i=0;
        while(n>0)
        {
            arr.push_back(n%2);
            n=n/2;
            i++;
        }
        ll sum=0;
        for(ll j=i-1;j>=0;j--)
        {
            sum+=arr[j];
        }
        cout << sum << "\n";
    }
    return 0;
}