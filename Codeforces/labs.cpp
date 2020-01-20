 
#include <bits/stdc++.h>

using namespace std ;
#define M 1000000007
#define loop(i,n) for(int i = 0;i < int(n);i++)
#define All(c) c.begin(), c.end()
#define RALL(c) c.rbegin(), c.rend()
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)
#define pb push_back

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
   		int n; cin>>n;
	vector<int> v[n+1];
	bool f = 1;
	int k = 1;
	for(int i=1;i<=n;i++)
	{
		if(f)
		{
			for(int j=1;j<=n;j++){
				v[j].pb(k);
				k++;
			}
		}
		else{
			for(int j=n;j>0;j--){
				v[j].pb(k);
				k++;
			}
		}
		f = 1-f;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j: v[i])
			cout<<j<<" ";
		cout<<endl;
	}
        
   }
   return 0;
}
 