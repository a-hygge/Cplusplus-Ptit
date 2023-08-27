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
	    long long n;
	    cin >> n;
	    double sqr = sqrt(n);
	    for(long long i = 2; i <= sqr; i++)
        {
            if(n % i == 0)
            {
                while(n % i == 0)
                {
                    cout << i << " ";
                    n /= i;
                }
            }
        }
        if(n != 1) cout << n;
        cout << endl;
	}
	return 0;
}
