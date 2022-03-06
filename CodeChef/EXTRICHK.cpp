#include<iostream>
#include<cmath>
using namespace std;

bool checkValidity(int a, int b, int c)
{
    // check condition
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}
 
// Driver function
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     
    if (checkValidity(a, b, c)){
        if(a==b && b==c){
            cout<<"1";
        }
        else if(a==b || b==c || a==c){
            cout<<"2";
            
        }
        else if(a!=b!=c){
            cout<<"3";
        }
    }
    else
        cout << "-1";
}