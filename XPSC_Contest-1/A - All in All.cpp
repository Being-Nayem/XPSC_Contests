#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;// = "person";
    string s2;// = "compression";
 
    while(cin>>s1>>s2)
    {
        int len1 = s1.size();
        int len2 = s2.size();
        int cnt = 0;
        int m=0;
        for(int i=0; i<len1; i++)
        {
            for(int j=m; j<len2; j++)
            {
                if(s2[j] == s1[i])
                {
                    cnt++;
                    m = j+1;
                    break;
                }
            }
        }
        if(cnt == len1)     cout<<"Yes"<<endl;
        else    cout<<"No"<<endl;
        
    }

    return 0;
}