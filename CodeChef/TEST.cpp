#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> a1;
    while(n!=42)
    {
        cin>>n;
        a1.push_back(n);
    }
    for(auto i = a1.begin();i!=a1.end()-1;++i)
    {
        cout<< *i <<endl;
    }
    return 0;
}