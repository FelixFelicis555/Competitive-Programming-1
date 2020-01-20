 
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
   		int n,m,t;
   		cin>>n>>m;
   		int a[100005];
        loop(i,n) cin>>a[i];
        bool found[100005];
        int ans[100005] = {0};
        for(int i = n-1;i>=0;i--){
        	if(!found[a[i]])
        		ans[i]++;
        	found[a[i]] = true;
        }
        for(int i = n-1;i>=0;i--){
        	ans[i] += ans[i+1];
        }
        for (int i = 0; i < m; i++){
        	cin >> t;
        	cout << ans[t-1] << endl;
    	}
   }
   return 0;
}
 