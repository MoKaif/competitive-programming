#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    vector<int> a;
    int k;
    cin>>n>>k;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int j=0;j<n;j++)
    {
        if (a[j]%k==0){
            ++count;
        }
    }
    cout<<count;
    return 0;
}