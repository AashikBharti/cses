#include <bits/stdc++.h>
#define ll long long
// or use typedef long long ll

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    else if (n > 4)
    {
        // cout << n / 2;
        for (ll i = 1; i <= ceil(n / 2.0); i++)
        {

            cout << 2 * (i - 1) + 1 << " ";
        }
        for (ll i = 1; i <= n / 2; i++)
        {
            cout << 2 * i << " ";
        }
    }
    else if (n == 4)
    {
        cout << 3 << " " << 1 << " " << 4 << " " << 2;
    }
    else
    {
        cout << "NO SOLUTION";
    }
    return 0;
}
