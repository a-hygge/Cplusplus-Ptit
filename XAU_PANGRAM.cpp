#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool  check(string s, int k)
{
    int n = s.size();
    set<char> st;
    for(int i = 1; i < n; i++)
    {
    	s[i] = tolower(s[i]);
        if(s[i] >= 'a' && s[i] <= 'z') st.insert(s[i]);
    }
    if(26 - st.size() < k) return true;
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
		int k;
		cin >> s >> k;

		if(check(s, k)) cout << "1";
		else cout << "0";
		cout << endl;
	}
	return 0;
}
