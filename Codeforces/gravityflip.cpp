#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,j,n,m,ck=0,i,a=0,b=0;
    cin>>n;
    long long int arr[n];
    for(i=0; i<n; i++){
         cin>>arr[i];
    }
    sort(arr, arr+n);
    for(i=0; i<n; i++){
        cout<<arr[i];
        if(i!=n)
            cout<<" ";
    }
    cout<<endl;
}