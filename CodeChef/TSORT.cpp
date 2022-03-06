#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> a1;
    for(int i=0;i<t;i++)
    {
        int temp;
        cin>>temp;
        a1.push_back(temp);
        
    }
    sort(a1.begin(),a1.end());
    for(int i=0;i<t;i++)
    {
        cout<<a1[i]<<endl;
    }
    return 0;
}