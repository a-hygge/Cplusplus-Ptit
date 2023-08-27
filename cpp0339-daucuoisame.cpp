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
	//cin.ignore();
	while(t--)
	{
		string s, tmp = "";
		cin >> s;
		int n = s.size();
		map<char,int> m;
		for(int i = 0; i < n; i++) m[s[i]]++;
		int	dem = 0;
		for(int i = 0; i < m.size(); i++)
		{
			if(m[i] > 1) dem += m[i]*(m[i] - 1) / 2;
		}
		cout << dem + n << endl;
	}
	return 0;
}
