#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    float bal;
    cin>>w>>bal;
    float newbal;
    if(w%5==0)
    {   newbal = bal-w-0.50;
        printf("%.2f",newbal);
    }
    if(w>bal){
        printf("%.2f",bal);
    }
    else{
        printf("%.2f",bal);
    }
    
    return 0;
}