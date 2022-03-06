#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int dog =0;
        int max = INT_MIN;
        for(int i =1;i<=k;i++)
        {
            dog = n%i;
            // cout<<dog<<endl;
            if (dog > max)
                max = dog;
        }
        cout<<max<<endl;
    }
    return 0;
}