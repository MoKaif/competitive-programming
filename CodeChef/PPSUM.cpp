#include<bits/stdc++.h>
int sum(int b,int a)
{
    if(b==0)
    {
        return a;
    }
    a=a*(a+1)/2;
    b--;
    return sum(b,a);
}

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ppsum;
        ppsum = sum(a,b);
        cout<<ppsum<<endl;

    }
    return 0;
}