#include <bits/stdc++.h>
using namespace std; 

  double  fact(int x)
{  
      double  sum = 1;
    for (int i = 1; i <= x; i++)
        sum = sum * i;
    return (sum);
} 

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int n, k, a[105];
        cin >> n >> k;
        int i, j;
        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        int count = 0;

        int t = k;
        while (a[t] == a[k - 1] && t <= n - 1)
        {
            count++;
            t++;
        }
        t = k - 2;
        int count1 = 1;
        while (a[t] == a[k - 1] && t >= 0)
        {
            count1++;
            t--;
        } 
       
        int count2 = count1 + count;
        int kx = max(count, count1);
        int r = min(count, count1);
       double  sum = 1;
        for (i = count2; i > kx; i--)
            sum = sum * i;
        sum = sum / fact(r);
          std::cout << std::fixed << std::setprecision(0)<<sum<<"\n";
    }
    return (0);
}