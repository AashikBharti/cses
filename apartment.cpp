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
    ll n, m, k;
    cin >> n >> m >> k;
    vl applicant_size;
    vl apartment_size;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        applicant_size.push_back(temp);
    }
    for (ll i = 0; i < m; i++)
    {
        ll temp;
        cin >> temp;
        apartment_size.push_back(temp);
    }
    ll count = 0;
    ll i = 0, j = 0;
    sort(applicant_size.begin(), applicant_size.end());
    sort(apartment_size.begin(), apartment_size.end());
    while (i < n && j < m)
    {
        if (abs(applicant_size[i] - apartment_size[j]) <= k)
        {
            i++;
            j++;
            count++;
        }
        else
        {
            if (applicant_size[i] - apartment_size[j] > k)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }

    cout << count << endl;
    return 0;
}