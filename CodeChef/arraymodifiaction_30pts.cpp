
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

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T ;
   cin>>T;
   while(T--){
   		int n;
        ll k;
        cin>>n>>k;
        ll a[n];
        loop(i,n){
        	cin>>a[i];
        }
        ll p = k/n;
        ll t = k%n;
        for(ll j = 0;j<p;j++){
        for(ll i = 0;i<n;i++){
        	a[i]^=a[n-i-1];
        }
    }
    	for(ll i = 0;i<t;i++){
        	a[i]^=a[n-i-1];
        }
        loop(i,n){
        	cout<<a[i]<<" ";
        }
        cout<<"\n";
   }
   return 0;
}
 