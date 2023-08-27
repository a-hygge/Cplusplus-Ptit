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
		string s;
		cin >> s;
		int n = s.size(), i = 0;
		while(i < n)
		{
			if(s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4') i += 3;
			else 
			{
				cout << s[i] ;
				i++;
			}
		}
		cout << endl;
	}
	return 0;
}