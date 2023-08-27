#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;

int main()
{
	fast
	int t;ll n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ll a[n], res = INT_MAX;
		for(ll &x : a) cin >> x;
		sort(a, a + n);
        for(int i = 1; i < n; i++) res = min(res, a[i] - a[i - 1]);
        cout << res << endl;
	}
	return 0;
}
