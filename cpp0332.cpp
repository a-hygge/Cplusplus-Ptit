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
	//cin >> t;
	//cin.ignore();
	while(t--)
	{
		string s, tmp = "";
		getline(cin, s);
		int n = s.size();
		for(int i = 0; i < n; i++) s[i] = tolower(s[i]);
		stringstream ss(s);
		vector<string> v;
		while (ss >> tmp)
		{
			tmp[0] = toupper(tmp[0]);
			v.push_back(tmp);
		}
		int m = v.size();
		for(int i = 0; i < m - 2; i++)
		{
			cout << v[i] << ' ';
		}
		cout << v[m - 2] << ", ";
		for(int i = 0; i < v[m - 1].size(); i++)
		{
			v[m - 1][i] = toupper(v[m - 1][i]);
		}
		cout << v[m - 1] ;
	}
	return 0;
}
