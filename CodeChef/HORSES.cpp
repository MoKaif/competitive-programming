#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int min = INT_MAX;
        int diff = 0;
        for(int k=0;k<N-1;k++)
        {
            // cout<<k<<endl;
            for(int j=k+1;j>k && j<N;j++)
            {
                diff = (arr[k] + arr[j]);
                // cout<<diff<<endl;
                if (diff<min)
                    min = diff;
                
            // cout<<k<<" "<<j<<endl;
            }
            // cout<<k<<endl;
        }
        cout<<min<<endl;
    }
    return 0;
}