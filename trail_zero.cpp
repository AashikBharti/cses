#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int sum = 0;
    int i = 1;
    while (round(n / pow(5, i)) > 0)
    {
        sum += n / pow(5, i);
        i++;
    }
    cout << sum << endl;
    return 0;
}