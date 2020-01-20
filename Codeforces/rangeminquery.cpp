 
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

void build(int si , int ss , int se)
{
	if(ss == se)
	{
		st[si] = arr[ss];
		return;
	}
 
	int mid = (ss + se)/2;
	build(2*si , ss , mid);
	build(2*si+1 , mid+1 , se);
 
	st[si] = min(st[2*si] , st[2*si+1]);
}
 
int query(int si , int ss , int se , int qs , int qe)
{
	if(qe < ss || qs> se)
		return INF;
 
	if(ss>=qs && se<=qe)
		return st[si];
 
	int mid = (ss + se)/2;
	int l = query(2*si , ss , mid , qs , qe);
	int r = query(2*si+1 , mid+1 , se , qs , qe);
 
	return min(l , r);
}

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T = 1;
   //cin>>T;
   while(T--){
   		int n , q , l , r;
 
		cin>>n;
		loop(i , n)
			cin>>arr[i];
 
		cin>>q;
		build(1 , 1 , n);
		while(q--){
			cin>>l>>r;
			cout<<query(1 , 1 , n , l+1 , r+1)<<endl;
		}

   }
   return 0;
}
 