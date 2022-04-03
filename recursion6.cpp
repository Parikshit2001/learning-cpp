#include <bits/stdc++.h>
using namespace std;
// recursion
// return the LAST index of value

int retind(int arr[], int size, int val)
{
    // base case
    if (size == 1)
    {
        if (arr[0] == val)
            return 1;
        else
            return -1;
    }

    // Recursive call
    int ans = retind(arr + 1, size - 1, val);
    // small calc
    if (ans == -1)
    {
        if (arr[0] == val)
            return 1;
        else
            return -1;
    }
    else
        return ans + 1;
}

int main()
{
    int arr[] = {1, 5, 3, 5, 5};
    int val;
    cin >> val;
    cout << retind(arr, 5, val);
    return 0;
}