#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, e) for (int i = 0; i < e; i++)
#define mod 1000000007
#define maxN 1000002
// success is bound to come just:Have Patience Keep Focus Don't Distract Keep Hustling.

void solve(ll precomp[])
{
  int n;
  cin >> n;
  cout << precomp[n + 1] - 1 << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  ll precomp[maxN];
  precomp[1] = 1;
  for (int i = 2; i <= maxN; i++)
  {
    precomp[i] = (precomp[i - 1] % mod) * (i % mod) % mod;
  }
  while (t--)
    solve(precomp);
  return 0;
}
