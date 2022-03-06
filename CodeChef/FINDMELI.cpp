#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a1;
    int n,k,input;
    cin>>n>>k;
    for(int i=0;i<=n-1;i++)
    {
        cin>>input;
        a1.push_back(input);
    }
    sort(a1.begin(),a1.end());
    bool check(binary_search(a1.begin(),a1.end(),k));
    if (check)
    {
        cout<<"1";
    }
    else
        cout<<"-1";
    return 0;
}