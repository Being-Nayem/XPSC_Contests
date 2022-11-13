#include<bits/stdc++.h>

using namespace std;
 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int N;
    cin>>N;
    for(int k=0; k<N; k++)
    {
        int i,j;
        cin>>i>>j;
        int sum = 0;
        for(int l=i; l<=j; l++)
        {
            sum += arr[l];
        }
        cout<<sum<<endl;
    }

    return 0;
}