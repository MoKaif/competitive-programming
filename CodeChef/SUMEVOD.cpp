#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int e=0,o=0;
    for(int i=1;i<=n*2;i=i+2)
    {
        o += i;
    }
    for(int j=2;j<=n*2;j=j+2)
    {
        e += j;
    }
    cout<<"\n"<<o<<" "<<e;
    return 0;
}
