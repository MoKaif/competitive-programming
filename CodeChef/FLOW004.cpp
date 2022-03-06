#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int fd;
        int num=a[i];
        int ld = num%10;
        while(num>0)
        {
            num%10;
            num=num/10;
            if(num>0){
                fd = num;
            }
            
        }
        cout<<fd+ld<<endl;
    }
    return 0;
}