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
	while(t--)
	{
	    ll n,tmp = 1;
	    cin >> n;
	    for(ll i = 1; i <= n; i++)
        {
            tmp = tmp*i/__gcd(tmp,i);
        }
        cout << tmp << endl;
	}
	return 0;
}
