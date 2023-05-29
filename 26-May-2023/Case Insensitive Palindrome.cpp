#include<bits/stdc++.h>
using namespace std;

int main(){
   // write your code here
    int t;
    cin>>t;
    while(t-->0)
    {
        string str;
        cin>>str;
        int flag=0;
        for(int i=0,j=str.length()-1;i<j;i++,j--)
        {
            if(tolower(str[i])!=tolower(str[j])){
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}