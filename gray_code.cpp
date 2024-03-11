#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool powerOfTwo(ll a)
{
    return a & !(a & (a - 1));
}
bool isbitdif(ll a, ll b)
{
    return powerOfTwo(a ^ b);
}

bool comp(ll a, ll b)
{
    return isbitdif(a, b);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (ll i = 0; i < pow(2, n); i++)
    {
        ll a = i ^ (i >> 1);
        bitset<16> b(a);
        string s = b.to_string();
        for (int i = 16 - n; i < 16; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
