 
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
	ll a[n],b[n];
	map<ll, int> m;
	vector<ll> ans;
	loop(i,n){
		cin>>a[i];
		m[a[i]]++;
		if(m[a[i]]==2) ans.push_back(a[i]);
	}
	loop(i,n){
		cin>>b[i];
	}
	ll res=0;
	loop(i,n){
		loop(j,ans.size()){
			if((a[i]&ans[j])==a[i]){
				res+=b[i];
				break;
			}
		}
	}
	cout<<res;
	}
	return 0;
}
 