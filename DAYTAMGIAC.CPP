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
		int a[n];
		for(int &x : a)
        {
            cin >> x;
        }
        sort(a, a + n);
        cout << a[n - 1] << endl;
	}
	return 0;
}
