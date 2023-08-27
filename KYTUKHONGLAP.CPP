#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;

int main()
{
	fast
	int t = 1;
	cin >> t;
	while(t--)
	{
		int n;
		string s;
		cin >> s;
		n = s.size();
		map<char,int> mp;
		for(int i = 0; i < n; i++) 
		{
			mp[s[i]]++;
		}
		for(int i = 0; i < n; i++) 
		{
			if(mp[s[i]] == 1) 
			{
				cout << s[i];
			}	
		}
		cout << endl;
	}
	return 0;
}
