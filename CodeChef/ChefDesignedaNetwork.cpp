#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        long long int m;
        cin >> n >> m; 

        if (n == 1 && m == 0)
            cout << 0<< "\n"; 
        else if(n==1 && m>1)
        { cout<<"-1\n"; }
        else if ((n == 1 && m == 1) || (n==2 && m==1))
            cout << 1 << "\n"; 
        else if(n==2 && m>3)
        {  cout<<"-1\n"; }
            

        else if(m == 0)
        { cout<<"-1"<<"\n";  } 

        
        else if (m < n - 1)
        {
            cout << "-1"
                 << "\n";
        } 
        else if(m<=n+1)
        {   cout<<"2"<<"\n";  }
        else if (m > n && m <= 2 * n)
        {
            cout << 3 << "\n";
        }
        else if (m == n - 1 || m == n)
        {
            cout << "2"
                 << "\n";
        }
        else if (m > 2 * n && m < n * (n + 1) / 2)
        {
            if ((2 * (m - 2 * n)) % n != 0)
                cout << 3 + ((2 * (m - 2 * n)) / n) + 1 << "\n";
            else
            {
                cout << 3 + ((2 * (m - 2 * n)) / n) << "\n";
            }
        }
        else if (m == n * (n + 1) / 2)
        {
            cout << n << "\n";
        }
        else if (m > n * (n + 1) / 2)
        {
            cout << "-1"
                 << "\n";
        }
    }

    return (0);
}