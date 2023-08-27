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
		int n,m;
		cin >> n >> m;
		int a[n][m];
		vector<int> vh;
		vector<int> vc;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1)
				{
					vh.push_back(i);
					vc.push_back(j);
				}
			}
		}
		for(int i : vh)
		{
			for(int j = 0; j < m; j++)
			{
				a[i][j] = 1;
			}
		}
		for(int i : vc)
		{
			for(int j = 0; j < n; j++)
			{
				a[j][i] = 1;
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
