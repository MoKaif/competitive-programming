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
    for(int i=0;i<n;i++)
    {
        int num,dig,count=0;
        num=a[i];
        while(num>0)
        {
            dig = num%10;
            num = num/10;
            if(dig==4)
            {
                ++count; 
            }
           
        } 
        cout<<count<<endl;
    }
    return 0;
}