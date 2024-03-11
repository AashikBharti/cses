#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s, int index, int len, set<string> *st)
{
    if (index == len)
    {
        st->insert(s);
    }
    else
    {
        for (int i = index; i <= len; i++)
        {
            swap(s[index], s[i]);
            solve(s, index + 1, len, st);
            swap(s[index], s[i]);
        }
    }
}

int main(int argc, char const *argv[])
{

    string s;
    getline(cin, s);
    int len = s.length();
    set<string> gen;
    solve(s, 0, len - 1, &gen);
    cout << gen.size() << endl;
    for (auto it = gen.begin(); it != gen.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
