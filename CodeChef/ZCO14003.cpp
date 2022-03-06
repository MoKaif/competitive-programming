#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {   
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]<=a[j])
                count++;
        }
        int res = a[i]*count;
        b.push_back(res);
    }
    int ans;
    ans =*max_element(b.begin(), b.end());
    cout<<ans<<endl;
    return 0;
}