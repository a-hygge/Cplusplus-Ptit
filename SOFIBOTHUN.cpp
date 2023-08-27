#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
ll check(ll n)
{
    ll f0 = 0, f1 = 1;
    if(n == 0 || n == 1) return n;
    for(int i = 2; i <= 92; i++)
    {
        ll fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        if(i == n) return fn;
    }
}
int main()
{
	fast
	int t = 1;
	cin >> t;
	while(t--)
	{
	    ll n, ok = 0;
	    cin >> n;
	    cout << check(n);
	    cout << endl;
	}
	return 0;
}
