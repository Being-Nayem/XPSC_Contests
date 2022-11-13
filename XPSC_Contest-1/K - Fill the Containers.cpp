#include <bits/stdc++.h>
using namespace std;

bool CanFill(const vector<int> &vessels, int m, int C)
{
    int cnt = 1;
    int capacity = C;

    for (int i = 0; i < vessels.size(); ++i)
    {
        if (vessels[i] > C)
            return false;

        if (vessels[i] > capacity)
        {
            if (cnt == m)
            {
                return false;
            }
            cnt++;
            capacity = C;
        }
        capacity -= vessels[i];
    }
    return true;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> vessels(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vessels[i];
        }

        int low = 1, high = 1000000000, c = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (CanFill(vessels, m, mid))
            {
                c = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout << c << endl;
    }
    return 0;
}