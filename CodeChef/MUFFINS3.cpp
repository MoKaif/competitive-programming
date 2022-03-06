#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int package = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]==package)
        {
            cout<<a[0]<<endl;
        }
        else{
            cout<<a[i]-package<<endl;
        }
    }
    return 0;
}