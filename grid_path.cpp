#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 7;
const int P = 48;
ll countPath = 0;
bool grid[N][N];
// string s;
ll steps = 0;

void solve(int row, int col)
{
    if (grid[row][col])
    {
        return; //
    }
    if (row == N - 1 && col == 0)
    {
        if (steps == 48)
        {
            countPath++;    
            cout << countPath << endl;
        }
        return;
    }
    grid[row][col] = true;
    if (row < N - 1 && !grid[row + 1][col])
    {
        steps++;
        solve(row + 1, col); //
        steps--;
    }
    if (row > 0 && !grid[row - 1][col])
    {
        steps++;             //
        solve(row - 1, col); //
        steps--;
    }
    if (col > 0 && !grid[row][col - 1])
    {
        steps++;             //
        solve(row, col - 1); //
        steps--;
    }
    if (col < N - 1 && !grid[row][col + 1])
    {
        steps++;
        solve(row, col + 1); //
        steps--;
    }
    grid[row][col] = false;
}

int main(int argc, char const *argv[])
{
    // getline(cin, s);
    solve(0, 0);
    cout << countPath << endl;
    return 0;
}
