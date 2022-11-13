#include <bits/stdc++.h>
using namespace std;

unsigned int heights[60017];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> heights[i];

    int q;
    cin >> q;

    while (q--)
    {
        int height;
        cin >> height;
        unsigned int *above = upper_bound(heights, heights + n, height);
        unsigned int *below = above;
        --below;
        while (below >= heights && *below == height)
        {
            --below;
        }
        if (below >= heights)
        {
            cout << *below << ' ';
        }
        else
        {
            cout << "X ";
        }

        if (above == heights + n)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << *above << endl;
        }
    }
}