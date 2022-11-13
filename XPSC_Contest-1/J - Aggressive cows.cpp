#include <bits/stdc++.h>
using namespace std;

int n, c;

int func(int num, int arr[])
{
    int cows = 1, pos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= num)
        {
            pos = arr[i];
            cows++;
            if (cows == c)
                return 1;
        }
    }
    return 0;
}
int Bs(int arr[])
{
    int ini = 0, last = arr[n - 1], max = -1;
    while (last > ini)
    {
        int mid = (ini + last) / 2;
        if (func(mid, arr) == 1)
        {
            if (mid > max)
                max = mid;
            ini = mid + 1;
        }
        else
            last = mid;
    }
    return max;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << Bs(arr) << endl;
    }

    return 0;
}