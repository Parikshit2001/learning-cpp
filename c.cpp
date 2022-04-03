#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> indices;
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            indices.push_back(val);
        }
        sort(indices.begin(), indices.end());
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            int val = max(abs(indices[0] - i), abs(indices[m - 1] - i));
            result.push_back(val);
        }
        for (auto i : result)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    // your code goes here
    return 0;
}
