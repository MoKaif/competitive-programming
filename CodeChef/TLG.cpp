#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,w,l=0;
    cin>>t;
    while(t--)
    {
        int a,b,win;
        cin>>a>>b;
        int temp=abs(a-b);
        if(a>b)
            win = 1;
        else
            win = 2;
        if(temp>=l){
            l=temp;
            w = win;
        }
            
    }
    cout<<w<<" "<<l;
    return 0;
}