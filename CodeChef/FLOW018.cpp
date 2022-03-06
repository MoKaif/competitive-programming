#include<bits/stdc++.h>
int factorial(int num){
    int ans;
    if(num<1)
        ans=1;
    else
        ans = num*factorial(num-1);
    return ans;
}
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        cout<<factorial(a)<<endl;
    }
    return 0;
}