 
#include <bits/stdc++.h>

using namespace std ;
#define M 1000000007
#define loop(i,n) for(int i = 0;i < int(n);i++)
#define All(c) c.begin(), c.end()
#define RALL(c) c.rbegin(), c.rend()
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)

typedef long long ll;
typedef vector<int>::iterator vitr ;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;
typedef pair<int, int> pii;

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
ll findGCD(ll arr[], int n) 
{ 
    ll result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T = 1;
   //cin>>T;
   while(T--){
   		int n;
   		cin>>n;
   		ll a[n];
   		loop(i,n){cin>>a[i];}
        sort(a,a+n);
        ll x = a[n-1];
        ll b[n];
        loop(i,n){
        	b[i] = x - a[i];
        }
        ll z = findGCD(b,n);
        ll sum = 0;
        loop(i,n){
        	sum += a[i];
        }
        ll y = (x*n - sum)/z;
        cout<<y<<" "<<z<<"\n";
   }
   return 0;
}
