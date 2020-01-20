 
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
   		float a,b,c;
   		int ans = 0;
   		cin>>a>>b>>c;
   		// int max1 = max(b,c);
   		// if(b>c){
   		// 	swap(b,c);
   		// }	

   		while(b > 0 && c > 1){
   		
        	b -= 1;
        	c -= 2;
        	ans+=3;
        }
    
    // max1 = max(b,c);
    	while(a > 0 && b >1 ){
    
        	a -= 1;
        	b -= 2;
        	ans+=3;
        }
    
        cout<<ans<<"\n";
    
   }
   return 0;
}
 