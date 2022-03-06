#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int quantity,price;
        float total;
        cin>>quantity>>price;
        if(quantity>1000)
        {
            total = quantity*(price - (price/10));
        }
        else
            total = quantity*price;
        printf("%.6f\n",total);
    }
    return 0;
}