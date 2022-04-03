#include <bits/stdc++.h>
using namespace std;
// recursion
// return the FIRST index of value

int retind(int arr[], int size, int val)
{
    // base case
    if (arr[0] == val)
        return 0;
    else if (size == 1)
        return -1;

    // Recursive call
    int ans = retind(arr + 1, size - 1, val);

    // small calc
    if (ans == -1)
        return -1;
    else
        return 1 + ans;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int val;
    cin >> val;
    cout << retind(arr, 5, val);
    return 0;
}