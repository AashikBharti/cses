#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    const unsigned int M = 1000000007;
    unsigned ll f = 1;
    unsigned ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        f = (f * 2) % M;
    }
    cout << f << endl;
    return 0;
}
