#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char n;
        cin>>n;
        if(n=='b' ||n=='B')
        {
            cout<<"BattleShip"<<endl;
        }
        if(n=='f' ||n=='F')
        {
            cout<<"Frigate"<<endl;
        }if(n=='c' ||n=='C')
        {
            cout<<"Cruiser"<<endl;
        }if(n=='d' ||n=='D')
        {
            cout<<"Destroyer"<<endl;
        }
    }
    return 0;
}