#include <bits/stdc++.h>
using namespace std;
// recursion
// length of string
// Remove 'x' from string
// Remove consecutive duplicates

void remConsDup(char s[])
{
    // base case
    if (s[1] == '\0')
        return;

    // small calc
    if (s[0] == s[1])
    {
        // shift
        for (int i = 0; s[i] != '\0'; i++)
            s[i] = s[i + 1];
        // recursion
        remConsDup(s);
        return;
    }
    // recursion
    remConsDup(s + 1);
    return;
}

void removeX(char s[])
{
    // base case
    if (s[0] == '\0')
        return;

    // small calc
    if (s[0] == 'x')
    {
        for (int i = 0; s[i] != '\0'; i++)
            s[i] = s[i + 1];
        // Recursion
        removeX(s);
        return;
    }
    // Recursion
    removeX(s + 1);
    return;
}

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
    cout << "Removing 'x'" << endl;
    removeX(str);
    cout << str << endl;
    l = length(str);
    cout << l << endl;
    cout << "Removing consecutive duplicate" << endl;
    remConsDup(str);
    cout << str << endl;
    l = length(str);
    cout << l << endl;
    return 0;
}