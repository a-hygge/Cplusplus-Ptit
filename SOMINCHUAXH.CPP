#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;

int main()
{
	fast
	int t;ll n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n], res = INT_MAX;
		map<int,int> mp;
		for(int &x : a)
        {
            cin >> x;
            if(x > 0)
            {
                mp[x]++;
            }
        }
        for(int i = 1; i <= 1000000; i++)
        {
            if(mp[i] == 0)
            {
                cout << i <<endl;
                break;
            }
        }
	}
	return 0;
}
