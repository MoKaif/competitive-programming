#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        int s,q=0,g,l;
        cin>>a>>b;
        for( int i=1;i<=a && i<=b; i++)
        {
            if(a%i==0 && b%i==0)
            {
                
                s=i;
                q = max(s,q);
            } 
            g=q;
        }
        l=a*b/g;
        cout<<g<<" "<<l<<endl;
        
    }
    return 0;
}