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
		ll n, k;
		cin >> n >> k;
		cout << ((k - 1)*k/2*(n/k) + (n%k + 1)*(n%k)/2 == k) << endl;
	}
	return 0;
}
