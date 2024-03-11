#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define sl set<ll>
#define mii map<int, int>
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    sl s;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size() << endl;

    return 0;
}
