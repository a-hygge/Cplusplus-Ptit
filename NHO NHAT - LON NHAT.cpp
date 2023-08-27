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
	//cin >> t;
	while(t--)
	{
		int s,m;
		cin >> m >> s;
		string a = "", b = "";
		if(m == 1 && s == 0) cout << "0" << " " << "0";
		else if(s == 0||s > 9*m) cout << "-1" << " " << "-1";
		else
		{
			a.insert(0,s/9,'9');
			b.insert(0,s/9,'9');
			s %= 9;
			if(s > 0)
			{
				a.insert(0,1,(char)(s+'0'));
				b.push_back((char)(s+'0'));
			}
			a.insert(0, m - a.size(), '0');
			b.insert(b.size(),m - b.size(), '0');
			if(a[0] == '0')
			{
				a[0] = '1';
				int p = 1;
				while(a[p] == '0')
				{
					p++;
					if(p == a.size()) break;
				}
				a[p] -= 1;
			}
			cout << a << " " << b;
		}
		cout << endl;
	}
	return 0;
}
