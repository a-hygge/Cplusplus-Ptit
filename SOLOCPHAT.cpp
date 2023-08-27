#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool check(string s)
{
	int n = s.size();
	for(int i = 0; i < n; i++)
	{
		if(s[i] != '0' && s[i] != '6' && s[i] != '8') return false;
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