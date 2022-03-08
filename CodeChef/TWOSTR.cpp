#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x;
        cin>>y;\
        bool flag =false;
        for(int i =0;i<x.length();i++)
        {
            if((x[i] == y[i]) || (x[i] =='?' || y[i] == '?') )
                flag = true;
            else
            {
                flag = false;
                break;
            }
                
        }
        if(flag == false)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}