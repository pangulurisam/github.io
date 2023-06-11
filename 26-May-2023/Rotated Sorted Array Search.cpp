#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binarysearch(vector<ll>&v, ll t)
{
    ll low=0;
    ll high=v.size()-1;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        if(v[mid]==t) return mid;
        else if(v[low]<=v[mid])
        {
            if(v[low]<=t && v[mid]>=t)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(v[mid]<=t && v[high]>=t)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    ll n;
    cin>>n;
    ll q;
    cin>>q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q-->0)
    {
        ll t;
        cin>>t;
        ll result=binarysearch(v,t);
        cout<<result<<"\n";
    }
    return 0;
}