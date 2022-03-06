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
    for(int j=0;j<n;j++)
    {
        int num =a[j];
        int sum = 0;
        while(num>0)
        {
           sum = sum + num%10;
           num = num/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}