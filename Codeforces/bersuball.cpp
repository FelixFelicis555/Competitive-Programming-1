 
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
   		int n,m,count = 0;
   		cin>>n;
   		int a[n];
   		loop(i,n) cin>>a[i];
   		cin>>m;
        int b[m];
        loop(i,m) cin>>b[i];
       	sort(a,a+n);
       	sort(b,b+m);
       	loop(i,n){
       		loop(j,m){
       			if(abs(a[i] - b[j]) <= 1){
       				b[j] = 10000;
       				count++;
       				break;
       			}
       		}
       	}
       	cout<<count<<"\n";
   }
   return 0;
}
 