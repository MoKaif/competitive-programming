#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i =0;i<N;i++)
        {
            cin>>a[i];
        }
        bool flag = true;
        for(int i =0; i<N;i++)
        {
            for(int j =0; j<N;j++)
            {
                if(a[j]%a[i]==0)
                    continue;
                else
                    flag = false;
            }
        }
        if(flag == true)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}