 
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
   int n;
   cin>>n;
   int x[n];
   loop(i,n) cin>>x[i];
   ll freq[100002] = {0},prefix[100002];
   loop(i,n){
   		freq[x[i]]++;
   }
   prefix[0] = 0;
   for(int i = 1;i<100001;i++){
   		prefix[i] = prefix[i-1] + freq[i];
   }
   ll T;
   cin>>T;
   while(T--){
   		ll m;
   		cin>>m;
   		int ans;
        if(m > 100000)
        	ans = n;
        else
        	ans = prefix[m];
        cout<<ans<<"\n";
   }
   return 0;
}
 