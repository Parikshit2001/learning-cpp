#include <iostream>
using namespace std;

int main()
{
    // bob plays first
    // bob score
    // alice score
    // bob win when bob score > alice score
    // alice whin when alice score >= bob score
    int t;
    long long n, a, b;
    int bobs, alices, common;
    int num;
    cin >> t;
    while (t--)
    {
        bobs = 0;
        alices = 0;
        common = 0;
        // b -> bob
        // a -> alice
        cin >> n >> b >> a;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num % a == 0 && num % b == 0)
                common++;
            else if (num % a == 0)
                alices++;
            else if (num % b == 0)
                bobs++;
        }
        if (bobs < alices)
            cout << "ALICE" << endl;
        else if (bobs > alices)
            cout << "BOB" << endl;
        // bobs == alices
        else if (common % 2 == 0)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    }
    return 0;
}