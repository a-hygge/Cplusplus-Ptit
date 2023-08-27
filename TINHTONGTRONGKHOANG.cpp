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
	ll n,q,l,r;
	cin >> t;
	while(t--)
	{
		cin >> n >> q;
		int a[n + 1], sum[n + 1] = {};
		sum[0] = 0;
		for(int i = 1; i <= n; i++)
		{
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
		}
		while(q--)
		{
            cin >> l >> r;
            cout << sum[r] - sum[l - 1] <<endl;
		}
	}
	return 0;
}
