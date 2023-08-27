#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool check(ll n)
{
	ll demc = 0, deml = 0;
	while(n > 0)
	{
		if ((n % 10) % 2 == 0) demc++;
		else deml++;
		n /= 10;
	}
	return demc == deml;
}
int main()
{
	fast
	int t = 1;
	//cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll dem = 0;
		for(ll i = pow(10, n - 1); i < pow(10,n); i++)
		{
			if(check(i)) 
			{
				cout << i << " ";
				dem++;
			}
			if(dem % 10 == 0) cout << endl;
		}
	}
	return 0;
}