#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool check(vector<int> &v)
{
    int n = v.size(), tongc = 0, tongl = 0;
    for(int i = 0; i < n; i++)
    {
    	if(v[i] % 2 == 0) tongc++;
    	else tongl++;
    }
    if((n % 2 == 0 && tongc > tongl) || (n % 2 != 0 && tongc < tongl)) return true;
    else return false;

}
int main()
{
	fast
	int t = 1;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		vector<int> v;
		getline(cin,s); 
		stringstream ss(s); 
		string tmp; 
		while(ss >> tmp)
		{
			v.push_back(tmp[tmp.size() - 1] - '0');
		}
		if(check(v)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
/*
2
11 22 33 44 55 66 77
23 34 45 56 67 78 89 90 121 131 141 151 161 171
*/