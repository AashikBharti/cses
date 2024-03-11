#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    long long len = s.length();
    long long maxi = INT64_MIN;
    long long temp = 1;
    for (long long i = 0; i < len - 1; i++)
    {
        maxi = max(maxi, temp);
        if (s[i] == s[i + 1])
        {
            temp++;
        }
        else
        {
            temp = 1;
        }
    }
     maxi = max(maxi, temp);
    cout << maxi << endl;
    return 0;
}
