 
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
   		int n,r;
        cin>>n>>r;
        int x[n];
        loop(i,n){
        	cin>>x[i];
        }
        sort(x,x+n);
        int a = 0,ans = 0;
        while(n>0 && x[n-1]-a*r>0){
        	while(x[n-1] == x[n-2])
        		n--;
        	a++;
        	n--;
        	ans++;
        }
        cout<<ans<<"\n";
   }
   return 0;
}
 