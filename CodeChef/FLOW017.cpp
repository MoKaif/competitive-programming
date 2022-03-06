#include<bits/stdc++.h>
int seclarge(int j,int k,int l)
{
    int result;
    if(j>k&&j>l)
    {
        if(k>l)
        {
            result = k;
        }
        else{
            result =l;
        }
    }
    else if(k>j&&k>l)
    {
        if(j>l)
        {
            result = j;
        }
        else{
            result =l;
        }
    }
    else
    {
        if(j>k)
        {
            result = j;
        }
        else{
            result = k;
        }
            
    }
    return result;
}
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<seclarge(a,b,c)<<endl;
    }
    
    return 0;
}