#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> a1;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int div=a%b;
        a1.push_back(div);
    }
    for(int i=0;i<t;i++)
    {
        cout<<a1[i]<<endl;

    }
    return 0;
}