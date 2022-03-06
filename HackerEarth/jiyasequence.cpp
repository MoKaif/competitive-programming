#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long product=1,mod;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int p;
            cin>>p;
            product*=p;
        }
        mod = product%10;
        if(mod==2||mod==3||mod==5)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}