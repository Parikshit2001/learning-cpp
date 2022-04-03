#include <bits/stdc++.h>
using namespace std;
// recursion
// check if array is sorted

bool is_sorted(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
        return true;

    // PMI
    if (arr[0] > arr[1])
        return false;

    bool isSmallerSorted = is_sorted(arr + 1, size - 1);
    return isSmallerSorted;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    bool ans = is_sorted(arr, 5);
    cout << ans << endl;
    cout << is_sorted(arr, 5) << endl;
    return 0;
}