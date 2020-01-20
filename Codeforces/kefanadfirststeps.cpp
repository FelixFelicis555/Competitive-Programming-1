 
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
   ll T = 1;
   //cin>>T;
   while(T--){
   		int n;
   		cin>>n;
        ll a[n];
        loop(i,n) cin>>a[i];
        ll dp[n];
        dp[0] = 1;
        for(int i = 1;i<n;i++){
        	if(a[i] >= a[i-1])
        		dp[i] = dp[i-1] + 1;
        	else
        		dp[i] = 1;
        }
        sort(dp,dp+n);
        cout<<dp[n-1]<<endl;
   }
   return 0;
}
 