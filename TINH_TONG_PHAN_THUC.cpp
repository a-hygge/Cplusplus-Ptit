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
	//cin >> t;
	while(t--)
	{
		double n,s = 0;
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			s += (double)1/i;
		}
		cout << fixed << setprecision(4) << s << endl;
	}
	return 0;
}