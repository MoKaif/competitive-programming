#include<iostream>
#include<array>
using namespace std;

int main()
{
    int num,temp;
    int result[100];
    cin>>num;
    for(int i =0;i<=num-1; i++)
    {
        string text;
        cin>>text;
        if(text.length()>10)
        {
           temp=text[0]<<text.length()-2<<text[text.length()-1];
           result[i]=temp;
        }
        else
        {
            result[i]=text;
        }
    }

    for(int j=0;j<=num;j++)
    {
        cout<<result[j];
    }
    return 1;
}