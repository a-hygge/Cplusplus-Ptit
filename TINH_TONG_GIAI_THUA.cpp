#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
ll tinh(ll n)
{
	ll s = 1;
	for(int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
int main()
{
	fast
	int t = 1;
	//cin >> t;
	while(t--)
	{
		ll n,s = 0;
		cin >> n;
		for(ll i = 1; i <= n; i++)
		{
			s += tinh(i);
		}
		cout << s << endl;
	}
	return 0;
}