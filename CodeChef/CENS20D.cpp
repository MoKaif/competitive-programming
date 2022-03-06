#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a;
        int count = 0;
        if(n==1)
            count = 0;
        
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        vector<int>::iterator i1;
        for(int p =0;p<n-1;p++)
        {
            for(int q =1;p<n;p++)
            {
                cout<<a[p]<<","<<a[q]<<endl;
                // int bw = a[p] & a[q];
                // i1  = search_n(a.begin(), a.end(), 1, bw);
                // if (i1 != a.end()) {
                //     count++;
                // }
            }
        }
        
        cout<<count<<endl;
    }
    return 0;
}