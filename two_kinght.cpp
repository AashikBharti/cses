#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << 0 << endl;

        else
        {
            cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
        }
    }
    return 0;
}
