#include<bits/stdc++.h>
using namespace std;


char alp[16] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string returnstring = "";
		cin>>n;
		vector<int> encode;
		int code;
		cin>>code;
		while(code>0)
		{
			int d;
			vector<int>::iterator ptr;
			d = code%10;
			encode.insert(encode.begin(),d);
			ptr++;
			code/=10;
		}
		int begin = 0, end = 15;
		for(int i = 0; i<n; i++)
		{
			// cout<<encode[i]<<endl;
			if(encode[i] == 0)
			{
				end = (begin + end)/2;
				cout<<end<<endl;
			}
			else
			{
				begin = (begin + end)/2 + 1;
				cout<<begin<<endl;
			}
			
		}
		cout<<end<<endl;
		// returnstring.push_back(alp[end]);
		// cout<<returnstring<<endl;
	}
	return 0;
}