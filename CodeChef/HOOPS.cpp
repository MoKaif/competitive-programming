#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=1,count=0;
        cin>>n;
        int fr=n;
        while (a!=fr)
        {
            ++count;
            ++a;
            --fr;
        }
        cout<<count+1<<endl;
        
    }
    return 0;
}