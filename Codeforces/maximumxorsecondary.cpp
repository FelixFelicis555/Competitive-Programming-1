 /* **********@harsh_agr********** */

#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
typedef long l;
 
#define pii pair<int,int>
#define pli pair<long,int>
#define pil pair<int,long>
#define pll pair<long,long>
 
#define vi vector<int>
#define vl vector<l>
#define vul vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define vvi vector<vector<int>>
#define vvii vector<vector<pii>>
#define vvl vector<vector<l>>
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>
 
#define lp(i,n) 	for(int i=0;i<n;i++)
#define lpd(i,n)    	for(i=n;i>=0;i--)
#define lp1(itr,start,stop)     for(itr=start;itr<stop;itr++)
#define lpd1(itr,start,stop)     for(itr=start;itr>stop;itr--)
#define W(itr) while(itr--)
#define mp(a,b) make_pair(a,b) 
#define last(a) (a)[((a).size())-1]
#define pb(b) push_back(b)
#define f first
#define s second
#define M 1000000007  
 
using namespace std;

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll TESTS = 1;
   //cin>>TESTS;
   while(TESTS--){
   		int n;
   		ll ans = 0;
   		cin>>n;
   		ll v[n];
   		lp(i,n)
   		cin>>v[i];
   		stack<ll> s;
   		lp(i,n){
   			while(!s.empty()){
   				if(s.top() < v[i]){
   					ans = max(ans,s.top() ^ v[i]);
   					s.pop();
   				}
   				else{
   					ans = max(ans,s.top() ^ v[i]);
   					break;
   				}
   			}
   			s.push(v[i]);

   		}
   		cout<<ans<<endl;
      
   }
   return 0;
}
 