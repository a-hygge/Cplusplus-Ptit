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
		int n;
		cin >> n;
		int a[n][3];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				cin >> a[i][j];
			}
		}
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			int dem0 = 0, dem1 = 0;
			for(int j = 0; j < 3; j++)
			{
				if(a[i][j] == 0) dem0++;
				else dem1++;
			}
			if(dem1 > dem0) res++; 
		}
		cout << res ;
	}
	return 0;
}
