 
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
int dp[4001];


int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T = 1;
   //cin>>T;
   while(T--){
   		int n,a,b,c;
		cin>>n>>a>>b>>c;
		for (int i=1;i<=n;i++) dp[i]=INT_MIN;
		for (int i=1;i<=n;i++){
			if (i>=a) dp[i]=max(dp[i],dp[i-a]+1);
			if (i>=b) dp[i]=max(dp[i],dp[i-b]+1);
			if (i>=c) dp[i]=max(dp[i],dp[i-c]+1);
		}
		cout<<dp[n]<<"\n";
   }
   return 0;
}
 