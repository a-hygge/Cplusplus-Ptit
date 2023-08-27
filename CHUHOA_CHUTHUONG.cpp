#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;

int main()
{
	fast
	int t;
	cin >> t;
	while(t--)
	{
		char s;
		cin >> s;
		if(s >= 'a' && s <= 'z') cout << (char)toupper(s);
		else cout << (char)tolower(s);
		cout << endl;
	}
	return 0;
}