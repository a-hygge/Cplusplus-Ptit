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
		int n;
		cin >> n ;
		int a[n][n];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i == 0 || i == n - 1) cout << a[i][j] << ' ';
				else if(j == 0 || j == n - 1) cout << a[i][j] << ' ';
				else cout << "  ";
			}
			cout << endl;
		}
	}
	return 0;
}
