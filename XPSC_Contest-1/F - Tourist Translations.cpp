#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string M;
    cin >> M;
    for (int x = 0; x < T; x++)
    {
        string s1, s2 = "";
        cin >> s1;

        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] >= 'A' && s1[i] <= 'Z')
            {
                int idx = s1[i] - 'A';
                s2 += M[idx] - 32;
            }
            else if (s1[i] >= 'a' && s1[i] <= 'z')
            {
                int idx = s1[i] - 'a';
                s2 += M[idx];
            }
            else if (s1[i] == '_')
            {
                s2 += " ";
            }
            else
            {
                s2 += s1[i];
            }
        }
        cout << s2 << endl;
    }
}