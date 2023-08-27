#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool check()
{
    int n = s.size();
    int l = 0, r = n - 1;
    while(l <= r)
    {
    	if(s[l] != s[r] || s[l] % 2 != 0 || s[r] % 2 != 0) return false;
    	l++;
    	r--;
    }
    return true;
}
int main()
{
	fast
	int t = 1;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if(check(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
