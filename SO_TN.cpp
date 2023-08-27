#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool check(string s)
{
	int l = 0, r = s.size() - 1;
	while(l <= r)
	{
		if(s[l++] != s[r--]) return false;
	}
	return true;
}
int main()
{
	fast
	int t = 1;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		(check(s)) ? cout << "YES" : cout << "NO";
		cout  << endl;
	}
	return 0;
}