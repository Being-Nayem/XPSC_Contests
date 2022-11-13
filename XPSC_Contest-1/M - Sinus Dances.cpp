#include <bits/stdc++.h>
using namespace std;

void a(int n, int pos)
{
    cout<<"sin("<<pos;
    
    if(pos < n){
        if(pos & 1) 
        {
            cout<<"-";
        }
        else 
        {
            cout<<"+";
        }

        a(n,pos + 1);
    }
    cout<<")";
}

void s(int n, int pos){
    if(pos < n)
    {
        cout<<"(";
        s(n,pos + 1);
        cout<<")";
    }
    
    a(n + 1 - pos,1);
    
    cout<<"+"<<pos;
}

int main(){
    int N;
    cin>>N;
    s(N,1);
    
    return 0;
}