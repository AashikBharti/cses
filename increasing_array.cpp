#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll t = n;
        vector<ll>
            v;
    while (t--)
    {
        ll temp;
        cin >> temp;
        v.push_back(temp);
    }
    ll move = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            move += v[i] - v[i + 1];
            v[i + 1] = v[i];
        }
    }
    cout << move << endl;

    return 0;
}
