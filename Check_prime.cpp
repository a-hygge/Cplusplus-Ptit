#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
#define MAX5 10000

using namespace std;
bool prime(long long n)
{
    if(n < 2) return false;
    else if(n != 2 && n % 2 == 0) return false;
    else if(n != 3 && n % 3 == 0) return false;
    else
    {
        double sqr = sqrt(n);
        for(int i = 5; i <= sqr; i += 6)
        {
            if(n % i == 0 || n % (i + 2) == 0) return false;
        }
    }
    return true;
}
int main()
{
	fast
	int t = 1;
	cin >> t;
	while(t--)
	{
	    ll a, b;
	    cin >> a >> b;
	    if(a > b)
        {
            swap(a,b);
        }
	    for(ll i = a; i <= b; i++)
        {
            if(prime(i)) cout << i << " ";
        }
	    cout << endl;
	}
	return 0;
}
