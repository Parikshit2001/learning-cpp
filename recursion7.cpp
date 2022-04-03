#include <bits/stdc++.h>
using namespace std;
// recursion
// ALL idices of value in array

int retind(int arr[], int size, int val, int output[])
{
    // will return the number of elements == val and update the output array

    // base case
    if (size == 0)
        return 0;

    // Recursive call
    int ans = retind(arr, size - 1, val, output);

    // small calc
    if (arr[size - 1] == val)
    {
        output[ans] = size - 1;
        ans++;
        return ans;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 5, 3, 5, 5, 4};
    int output[6];
    int val;
    cin >> val;
    int count = retind(arr, 6, val, output);
    cout << count << endl;
    for (int i = 0; i < count; i++)
        cout << output[i] << " ";

    return 0;
}