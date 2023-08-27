#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool  check(string s)
{
    int n = s.size();
    for(int i = 1; i < n; i++)
    {
        if(abs(s[i - 1] - s[i]) != 1) return false;
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
