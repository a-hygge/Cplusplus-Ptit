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
	    double a,b,c,d;
		cin >> a >> b >> c >> d;
		double res = sqrt((c - a)*(c - a) + (d - b)*(d - b));
		cout << fixed << setprecision(4) << res << endl;
	}
	return 0;
}
