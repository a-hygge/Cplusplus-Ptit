#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool check(ll n)
{
	ll f0 = 0, f1 = 1;
	for(int i = 2; i <= 93; i++)
	{
		ll fn = f0 + f1;
		if (fn == n) return true;
		f0 = f1;
		f1 = fn;
	}
	return false;
}
int main()
{
	fast
	int t = 1;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		if(check(n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
