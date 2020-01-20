#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int j, n, k;
        cin >> n >> k;                     
        long long int a[10005];
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[3][n];
        for (i = 0; i < n; i++)
        {
            b[0][i] = a[i];
        }

        for (i = 0; i < n; i++)
        {
            a[i] = a[i] ^ a[n - i - 1];
        }
        for (i = 0; i < n; i++)
        {
            b[1][i] = a[i];
        }
        for (i = 0; i < n; i++)
        {
            a[i] = a[i] ^ a[n - i - 1];
        }
        for (i = 0; i < n; i++)
        {
            b[2][i] = a[i];
        } 
        long long int k1 =k;
        int t1 = k % n; 
        k = k-t1;
        k = k / n;
        k = k % 3;
        for (i = 0; i < n; i++)
        {
            a[i] = b[k][i];
        } 
        for(i=0; i<t1; i++)
         a[i] = a[i] ^ a[n - i - 1]; 
         if(k1>=3*n && n%2==1)
         a[(n-1)/2] = 0; 
         for(i=0; i<n; i++)
         cout<<a[i]<<" "; 
         cout<<"\n";
    }
    return (0);
}