#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maximum;
    maximum = max(a,max(b,c));
    if (a==maximum){
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    if (b==maximum){
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    if (c==maximum){
        if(b>a){
            cout<<b;
        }
        else{
            cout<<a;
        }
    }
    return 0;
}