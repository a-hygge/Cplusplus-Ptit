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
		int n, m, p;
		cin >> n >> m >> p;
		int a[n][m], b[m][p], c[n][p];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < p; j++)
			{
				cin >> b[i][j];
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < p; j++)
			{
				int sum = 0;
				for(int k = 0; k < m; k++)
				{
					sum += a[i][k]*b[k][j];
				}
				c[i][j] = sum;
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < p; j++)
			{
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
