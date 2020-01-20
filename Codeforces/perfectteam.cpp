 
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
   cin>>T;
   while(T--){
   		ll c,m,x,sum;
   		cin>>c>>m>>x;
   		if(c==0 || m==0){
   			cout<<0<<"\n";
   		}
   		else{
   		sum = c+m+x;
   		ll mini = min(c,m);
   		if(sum/3 > mini){
   			cout<<mini<<"\n";
   		}
   		else{
   			cout<<sum/3<<"\n";
   		}
   		}
        
        
   }
   return 0;
}
 