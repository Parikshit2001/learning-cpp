#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastrun              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define mod 1000000007

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, b;
        cin >> n >> b;
        if (n < b)
            cout << 0 << endl;
        else
        {
            ll max = n - b;
            ll new_max;
            for (int i = 2; i < n; i++)
            {
                new_max = i * (n - i * b);
                if (new_max > max)
                    max = new_max;
                else
                {
                    cout << max << endl;
                    break;
                }
            }
        }
    }
    return 0;
}