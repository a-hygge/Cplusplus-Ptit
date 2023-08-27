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
	//cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		set<int> s;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int x : s) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
