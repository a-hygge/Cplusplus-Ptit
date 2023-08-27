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
	    ll a,m, ok = 0;
	    cin >> a >> m;
	    for(ll i = 1; i < m; i++)
	    {
	        if((a*i) % m == 1)
            {
                cout << i;
                ok = 1;
                break;
            }
	    }
	    if(ok == 0) cout << -1;
	    cout << endl;
	}
	return 0;
}
