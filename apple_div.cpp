#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<ll> applesWeight;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        sum += temp;
        applesWeight.push_back(temp);
    }
    ll diff = LONG_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        ll c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & 1 << j)
                c += applesWeight[j];
        }
        diff = min(diff, abs(sum - c - c));
    }
    cout << diff << endl;
    return 0;
}
