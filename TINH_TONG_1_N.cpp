#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;

int main()
{
	fast
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << n*(n + 1)/2 << endl;
	}
	return 0;
}