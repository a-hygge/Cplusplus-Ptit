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
	//cin.ignore();
	while(t--)
	{
		string s, ss = "";
		cin >> s;
		int n = s.size();
		for(int i = 0; i < n; i++)
		{
			s[i] = tolower(s[i]);
			if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') 
			{
				cout << '.' << s[i];
			}
		}
		
	}
	return 0;
}
/*
2
AAAAAAAA
AAECCCCGGGD
*/