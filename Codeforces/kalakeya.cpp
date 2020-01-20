 
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
   		int n,k;
   		cin>>n>>k;
        int a[n];
        loop(i,n){
        	a[i] = i+1;
        }
        int ans[n],flg = 1;
        int used[n+1] = {0};
        loop(i,n){
        	if((a[i]+k)<=n && used[a[i]+k+1]==0){
        		ans[i] = a[i]+k;
        		used[a[i]+k+1]+=1;
        	}
        	else{
        		if((a[i]-k)>=1 && used[a[i]-k+1]==0){
        			ans[i] = a[i]-k;
        			used[a[i]-k+1]+=1;
        		}
        		else{
        			flg = 0;
        			}
        		}
        	}
        
        if(flg==0){
        	cout<<-1;
        }
        else
        	loop(i,n){
        		cout<<ans[i]<<" ";
        	}
        }
        
   
   cout<<"\n";
   return 0;
}
 