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
	    int n = s.size();
	    if(s[n - 1] == '6' && s[n - 2] == '8') cout << 1;
	    else cout << 0;
	    cout << endl;
	}
	return 0;
}
