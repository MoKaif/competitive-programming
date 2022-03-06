#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p;
    long int n;
    vector<int> a1;
    cin>>t;
    for(int i=0;i<=t-1;i++)
    {
        cin>>p;
        a1.push_back(p);
    }
    for(int j=0;j<a1.size();j++)
    {
        int num,rev=0;
        num = a1[j];
        while(num>0)
        {
            int dig = num%10;
            rev = rev*10 + dig;
            num = num/10;
        }
        cout<<rev<<endl;
    }
    
    return 0;
}