#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool check(string s)
{
    int n = s.size(), tongc = 0, tongl = 0;
    for(int i = 0; i < n; i++)
    {
    	if(i % 2 == 0) tongc += s[i] - '0';
    	else tongl += s[i] - '0';
    }
    if (abs(tongl - tongc) % 11 == 0) return true;
    return false;
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
		if(check(s)) cout << "1";
		else cout << "0";
		cout << endl;
	}
	return 0;
}
