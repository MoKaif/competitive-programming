#include<bits/stdc++.h>
using namespace std;
char upper(char c){
    return 'A' + (c - 'a');
}
int main()
{
    while(true)
    {
        string t;
        cin>>t;
        if(sizeof(t)==0)
            break;
        for(int i=0;i<t.size();i++)
        {
            t[i] = upper(t[i]);
        }
        cout<<t<<endl;
    }
    
    return 0;
}