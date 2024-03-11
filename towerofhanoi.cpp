#include <bits/stdc++.h>
#define ll long long
using namespace std;

void towerOfHanoi(int n, vector<pair<int, int>> *v, int from_rod, int to_rod,
                  int aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, v, from_rod, aux_rod, to_rod);
    // cout << "Move disk " << n << " from rod " << from_rod
    //      << " to rod " << to_rod << endl;
    v->push_back(pair<int, int>(from_rod, to_rod));
    towerOfHanoi(n - 1, v, aux_rod, to_rod, from_rod);
}

void solve(int n)
{

    vector<pair<int, int>> v;
    towerOfHanoi(n, &v, 1, 3, 2);
    cout << v.size() << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}
