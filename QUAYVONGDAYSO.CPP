#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;

int main()
{
	fast
	int t;
	ll n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		int a[n];
		for(int &x : a)
        {
            cin >> x;
        }
        for(int i = k; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        for(int i = 0; i < k; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
	}
	return 0;
}
