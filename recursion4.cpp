#include <bits/stdc++.h>
using namespace std;
// recursion
// return the first index of value

int retind(int arr[], int size, int val)
{
    if (arr[0] == val)
        return 0;
    else if (size == 0 || size == 1)
        return -1;
    else
        return 1 + retind(arr + 1, size - 1, val);
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int val;
    cin >> val;
    cout << retind(arr, 5, val);
    return 0;
}