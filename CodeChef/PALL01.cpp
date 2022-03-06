#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem,rev=0;
        cin>>n;
        int num =n;
        while(num!=0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        // cout<<rev<<endl;
        if(rev!=n)
        {
            cout<<"loses"<<endl;
        }
        else    
            cout<<"wins"<<endl;
    }
    return 0;
}