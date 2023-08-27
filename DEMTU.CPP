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
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp, x;
		cin >> x;
		while(ss >> tmp)
		{
			if(tmp != x) cout << tmp << ' ';
		}
		cout << endl;
	}
	return 0;
}
