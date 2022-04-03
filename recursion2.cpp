#include <bits/stdc++.h>
using namespace std;
// recursion
// fibonacci

int fib(int n)
{
    // 2 base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // 2 smallOutputs
    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);
    return smallOutput1 + smallOutput2;
}

int main()
{
    int val;
    cin >> val;
    int ans = fib(val);
    cout << ans << endl;
    return 0;
}