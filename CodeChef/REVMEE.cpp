#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,input;
    vector<int> a1;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>input;
        a1.push_back(input);
    }
    reverse(a1.begin(),a1.end());
    for(int i=0;i<=n-1;i++)
    {
        cout<<a1[i]<<" ";
    }
    return 0;
}