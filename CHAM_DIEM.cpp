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
	vector<char> v;
	vector<char> v1 = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	vector<char> v2 = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 0; i < 15; i++)
		{
			char x;
			cin >> x;
			v.push_back(x);
		}
		int dem = 0;
		if(n == 101)
		{
			for(int i = 0; i < 15; i++)
			{
				if(v[i] == v1[i]) dem++;
			}
		}
		else
		{
			for(int i = 0; i < 15; i++)
			{
				if(v[i] == v2[i]) dem++;
			}
		}
		cout  << fixed << setprecision(2) << (double)10/15*dem << endl;
		v.clear();
	}
	return 0;
}