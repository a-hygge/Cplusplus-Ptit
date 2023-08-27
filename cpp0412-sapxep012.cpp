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
	//cin.ignore();
	while(t--)
	{
		int n;
		cin >> n;
		set<char> st;
		string s;
		for(int i = 0; i < n; i++)
		{
			cin >> s;
			for(int i = 0; i < s.size(); i++)
			{
				st.insert(s[i]);
			}
		}
		for(auto x: st) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
