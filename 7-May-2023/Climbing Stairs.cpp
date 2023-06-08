#include<bits/stdc++.h>
using namespace std;

int dp[50];
int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t-->0)
    {
        int n;
        cin>>n;
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<50;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        cout<<dp[n]<<"\n";
    }
    return 0;
}