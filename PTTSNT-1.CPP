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
	while(t--)
	{
	    ll n, k, ok = 0;
	    cin >> n >> k;
	    double sqr = sqrt(n);
	    int dem = 0;
	    for(int i = 2; i <= sqr; i++)
        {
            if(n % i == 0)
            {
                while(n % i == 0)
                {
                    dem++;
                    if (dem == k)
                    {
                        cout << i;
                        ok = 1;
                        break;
                    }
                    n /= i;
                }
            }
        }
        if(n != 1)
        {
            dem++;
            if (dem == k)
            {
                cout << n;
                ok = 1;
            }
        }
        if(ok == 0) cout << -1;
        cout << endl;
	}
	return 0;
}
