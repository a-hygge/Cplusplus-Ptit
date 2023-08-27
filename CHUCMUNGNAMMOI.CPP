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
	string s;
	set<string> st;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		st.insert(s);
	}
	cout << st.size() << endl;
	return 0;
}
/*
4
CHUC MUNG NAM MOI
HAPPY NEW YEAR
CHUC MUNG TUOI MOI
CHUC MUNG NAM MOI
*/