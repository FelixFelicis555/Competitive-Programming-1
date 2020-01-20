#include <bits/stdc++.h>
using namespace std;
long long int fibnumb(int n)
{
    long long int t;
    t = (int)((pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (sqrt(5) * pow(2, n)));
    return (t);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n == 1)
            cout << 0 << "\n";
        else
        {  
              int k =1; 
              long long int t=2; 
              while(t<=n)
               {  t=t*2; 
                   k++;
               }    
               k--; 
           long long int  value = pow(2, k); 
           if(value%60==0)
           value = 60; 
           else
            value=value%60;
            long long int a[62];
            int i;
            int first = 0, second = 1; 
            a[1]=0; 
            a[2]=1; 
            long long int third;
            for (i = 3; i < 61; i++)
            {
                third = (second + first)%10;
                first = second%10;
                second = third%10;
                    a[i] = third ;
            }  
            cout<<a[value]<<"\n"; 
             
         
        }
    }

    return (0);
}