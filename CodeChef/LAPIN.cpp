#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int lf[26], rf[26];
		memset(lf, 0, sizeof(lf));
		memset(rf, 0, sizeof(lf));
		// for (int i = 0; i < 5; i++)
		// 	cout << lf[i] << " ";
		// cout << endl;
		for(int i =0;i<s.length()/2;i++)
		{
			char curr = s[i];
			lf[curr-'a']++;
		}
		for(int i =(s.length()+1)/2;i<s.length();i++)
		{
			char curr = s[i];
			rf[curr-'a']++;
		}
		bool isSame = true;
		for(int i=0;i<26;i++)
		{
			if(lf[i] != rf[i])
			{
				isSame = false;
				break;
			}	
		}
		// for (int i = 0; i < 26; i++)
		// 	cout << lf[i] << " ";
		if(isSame)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}