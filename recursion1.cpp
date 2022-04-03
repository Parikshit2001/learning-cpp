#include <bits/stdc++.h>
using namespace std;
// recursion
// length of string

int length(char s[])
{
    // base case
    if (s[0] == '\0')
        return 0;

    // recursive call
    int l = length(s + 1);

    // small calculation
    return (l + 1);
}

int main()
{
    char str[100];
    cin >> str;
    int l = length(str);
    cout << l << endl;
    return 0;
}