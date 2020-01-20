#include <bits/stdc++.h>
using namespace std;
#define P 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, i, j, k;
        cin >> a >> b >> c;
        long long int sum = 0;
        for (i = 1; i <= b; i++)
        {
            for (j = 2; j <= a; j++)
            {
                long long int k = ((i * i) / (j - 1)) + 1;

                if (c > k)
                {
                    sum = (sum + c - k)%P; 
                  
                    
                }
            }
        }

        cout << sum << "\n";
    }

    return (0);
}