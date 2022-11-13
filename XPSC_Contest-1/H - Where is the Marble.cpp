#include <bits/stdc++.h>
using namespace std;

int num[10005];

int main()
{
    int t = 1;
    int n, q;

    while (cin >> n >> q, q || q)
    {
        for (int i = 0; i < n; ++i)
            cin >> num[i];

        sort(num, num + n);

        cout << "CASE# " << t++ << ":\n";
        while (q--)
        {
            int nn;
            cin >> nn;

            auto iter = lower_bound(num, num + n, nn);
            if (iter == num + n || *iter != nn)
                cout << nn << " not found\n";
            else
                cout << nn << " found at " << (iter - num) + 1 << '\n';
        }
    }
}