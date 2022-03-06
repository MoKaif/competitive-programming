#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans;
    int n,sum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sum=a+b;
        ans.push_back(sum);
    }
    for(int j=0;j<n;j++)
    {
        cout<<ans[j]<<endl;
    }
    
    return 0;
}