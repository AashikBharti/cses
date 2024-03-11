#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n > m && n % 2 == 0)
        {
            cout << n * n - m + 1;
        }
        else if (n > m && n % 2 == 1)
        {
            cout << (n-1) * (n-1) + m;
        }
        else if (m > n && m % 2 == 1)
        {
            cout << m * m - n + 1;
        }
        else if (m > n && m % 2 == 0)
        {
            cout << (m - 1) * (m - 1) + n;
        }
        else if (n == m)
        {
            cout << n * m - n + 1;
        }
        cout << '\n';
    }
    return 0;
}
