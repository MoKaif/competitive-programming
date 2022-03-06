#include<bits/stdc++.h>
int factorial(int n){
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];
    if(t>=1 && t<=100){
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<t;i++)
        {
             int t = a[i];
             cout<<factorial(t)<<endl;  
        }
    }
    
    return 0;
}

