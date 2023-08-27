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
	//cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		s += '@';
		int n = s.size(), dem = 1;
		for(int i = 1; i < n; i++)
		{
			if(s[i] == s[i -  1]) dem++;
			else
			{
				cout << s[i - 1] << dem;
				dem = 1;
			}
		}
		cout << endl;
	}
	return 0;
}
/*
2
AAAAAAAA
AAECCCCGGGD
*/