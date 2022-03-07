#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int p, r;
        int req_pages = x-y;
        // cout<<req_pages<<" "<<endl;
        bool flag =false;
        for(int i=0;i<n;i++)
        {
            cin>>p>>r;
            if(p>=req_pages && r<=k)
            {
                flag = true;
            }
        }
        if(flag == true)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
    return 0;
}