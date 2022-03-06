#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];   
    }
    for(int i=0;i<t;i++)
    {
        int num = a[i];
        int result;
        result = round(sqrt(num));
        cout<<result<<endl;
    }
    return 0;
}