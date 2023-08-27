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
		cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			mp[a[i]] = 0;
		}
		for(int i = 0; i < n; i++) 
		{
			mp[a[i]]++;
		}
		int dem = 0;
		for(int i = 0; i < n; i++) 
		{
			if(mp[a[i]] > 1) 
			{
				dem += mp[a[i]];	
				mp[a[i]] = 0;
			}	
		}
		cout << dem << endl;
	}
	return 0;
}
