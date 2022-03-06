#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int count = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }     
        int i =0;
        int j = 1;
        while(i<j && i<n && j<n)
        {
            if(a[i]%2 == 0 && a[j]%2 != 0)
            {
                count++;
                j++;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}