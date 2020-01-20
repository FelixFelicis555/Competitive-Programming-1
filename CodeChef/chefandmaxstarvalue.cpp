#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void findfactor(int x, int count[])
{
    int k = sqrt(x);
    int i;
    for (i = 1; i <= k; i++)
    {
        if (x % i == 0)
        {
            if (i * i == x)
            {
                count[i]++;
            
            }
            else
            {
                count[i]++; 
                count[x/i]++; 
            
            }
            
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int count[1000004] = {0};
        int n, a[100005];
        cin >> n;
        int i, j;
        for (i = 0; i < n; i++)
            cin >> a[i];
        int best = 0;
        findfactor(a[0], count);

        for (i = 1; i < n; i++)
        {
            int sum = count[a[i]];
            if (sum > best)
                best = sum;

            findfactor(a[i],  count);
        }

        cout<<best<< "\n";
    }

    return (0);
}