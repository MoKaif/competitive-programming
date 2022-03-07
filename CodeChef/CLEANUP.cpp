#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        int jobs[n + 1] = {0};
        // for(int i = 1; i<=n;i++)
        // {
        //     cout<<jobs[i]<<" ";
        // }
        int check;
        for(int i =1;i<=m; i++)
        {
            cin>>check;
            jobs[check] = 1;
        }
        // for(int i = 1; i<=n;i++)
        // {
        //     cout<<jobs[i]<<" ";
        // }
        vector<int> chef;
        vector<int> assistant;
        bool flag = true;
        for(int i = 1; i<=n;i++)
        {
            if(jobs[i] == 0)
            {
                if(flag == true)
                {
                    chef.push_back(i);
                    flag = false;
                }
                else{
                    assistant.push_back(i);
                    flag = true;
                }
            }
            else
                continue;
        }
        for (int i = 0; i < chef.size(); i++)
            cout << chef[i] << " ";
        cout<<endl;
        for (int i = 0; i < assistant.size(); i++)
            cout << assistant[i] << " ";
        cout<<endl;
    }
    return 0;
}