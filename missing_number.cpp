#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    long long sum_total = n * (n + 1) / 2;
    while (n-->1)
    {
        long long s;
        cin >> s;
        sum_total -= s;
    }
    cout << sum_total;
    return 0;
}
