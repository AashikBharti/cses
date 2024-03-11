#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum % 2 == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        ll temp = sum / 2;
        vector<unsigned ll> v1;
        vector<unsigned ll> v2;
        ll tempsum = 0;
        for (ll i = n; i >= 1; i--)
        {
            tempsum += i;
            if (temp >= tempsum)
            {
                v1.push_back(i);
            }
            else
            {
                tempsum -= i;
                v2.push_back(i);
            }
        }
        cout << v1.size() << endl;
        for (auto i = v1.begin(); i != v1.end(); i++)
        {
            cout << *i << " ";
        }
        cout << '\n'
             << v2.size() << endl;
        for (auto i = v2.begin(); i != v2.end(); i++)
        {
            cout << *i << " ";
        }
    }
    return 0;
}
