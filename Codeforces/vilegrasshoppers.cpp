 
#include <bits/stdc++.h>

using namespace std ;
#define int long long
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

void prime(ll arr[], ll n, ll p) 
{ 
    // Find maximum value in the array 
    ll max_val = *max_element(arr, arr + n); 
  
    // USE SIEVE TO FIND ALL PRIME NUMBERS LESS 
    // THAN OR EQUAL TO max_val 
    // Create a boolean array "prime[0..n]". A 
    // value in prime[i] will finally be false 
    // if i is Not a prime, else true. 
    vector<bool> prime(max_val + 1, true); 
  
    // Remaining part of SIEVE 
    prime[0] = false; 
    prime[1] = false; 
    for (ll p = 2; p * p <= max_val; p++) { 
  
        // If prime[p] is not changed, then 
        // it is a prime 
        if (prime[p] == true) { 
  
            // Update all multiples of p 
            for (ll i = p * 2; i <= max_val; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Minimum and Maximum prime number 
    ll minimum = INT_MAX;
    ll maximum = INT_MIN;
    for (ll i = 0; i < n; i++) 
        if (prime[arr[i]]) { 
            minimum = min(minimum, arr[i]); 
            maximum = max(maximum, arr[i]); 
        } 
  	if(maximum > p){
  		cout<<maximum<<endl;
  	}
  	else
  		cout<<-1<<endl;
    // cout << "Minimum : " << minimum << endl; 
    // cout << "Maximum : " << maximum << endl; 
} 

signed main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T = 1;
   //cin>>T;
   while(T--){
   		ll p,y;
   		cin>>p>>y;
   		ll a[y];
   		for(ll i =0;i<y;i++){
   			a[i] = i+1;
   		}
        prime(a,y,p);
        
   }
   return 0;
}
