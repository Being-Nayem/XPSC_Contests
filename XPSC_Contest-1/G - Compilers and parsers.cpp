#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     while (n--)
     {
          string str;
          cin >> str;
          int n = str.length();
          int cnt = 0;
          int len = 0;
          for (int i = 0; i < n; i++)
          {
               if (str[i] == '<')
                    cnt++;
               else
                    cnt--;
               if (cnt < 0)
                    break;
               if (cnt == 0)
                    len = i + 1;
          }
          cout << len << endl;
     }
     return 0;
}