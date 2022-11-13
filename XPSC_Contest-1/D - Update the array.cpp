#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit(int n, int x) { return n | (1 << x); }
int ClearBit(int n, int x) { return n & ~(1 << x); }
int ToggleBit(int n, int x) { return n ^ (1 << x); }
int CheckBit(int n, int x) { return (bool)(n & (1 << x)); }

unsigned long long BIT[10001];
int n, u, i, l, r, val, k;

void update(int i, int val)
{
    for (; i <= n; i += i & (-i))
        BIT[i] += val;
}

unsigned long long query(int i)
{
    unsigned long long sum = 0;

    for (; i > 0; i -= i & (-i))
        sum += BIT[i];

    return sum;
}

void range_update(int i, int j, int val)
{
    update(i, val);
    update(j + 1, -val);
}

int main(void)
{
    int tc;

    cin >> tc;

    while (tc--)
    {
        cin >> n >> u;

        memset(BIT, 0, sizeof(unsigned long long) * (n + 1));

        for (i = 1; i <= u; i++)
        {
            cin >> l >> r >> val;
            range_update(l + 1, r + 1, val);
        }

        cin >> k;

        for (i = 1; i <= k; i++)
        {
            cin >> val;
            cout << endl
                 << query(val + 1);
        }
    }
    return 0;
}
