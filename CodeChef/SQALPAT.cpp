#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            count =count+4;
        }
        for(int j=1;j<=5;j++)
        {
            cout<<count<<" ";
            if(i%2==0){
                count--;
            }
            else{
               count++; 
            }
            
        }
        cout<<"\n";
        if (i%2==0){
                count=count+6;
        }
    }
    return 0;
}