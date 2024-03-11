#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 8;
string chess[N];
bool col[N], leftDiag[2 * (N - 1)], rightDiag[2 * (N - 1)];
int numberOfWays = 0;
void putNext(int r)
{
    if (r == N)
    {
        numberOfWays++;
        return;
    }
    for (int c = 0; c < N; c++)
    {
        if (col[c] == 0 && leftDiag[r - c + N - 1] == 0 && rightDiag[r + c] == 0 && chess[r][c] == '.')
        {
            col[c] = leftDiag[r - c + N - 1] = rightDiag[r + c] = true;
            putNext(r + 1);
            col[c] = leftDiag[r - c + N - 1] = rightDiag[r + c] = false;
        }
    }
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < N; i++)
    {
        cin >> chess[i];
    }
    putNext(0);

    cout << numberOfWays << endl;

    return 0;
}
