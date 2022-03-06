#include<iostream>
using namespace std;

int main()
{
    int j,k,l;
    cin>>j>>k>>l;
    if(j!=0 && k!=180 && l!=180){
        if (j+k+l==180)
        {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}