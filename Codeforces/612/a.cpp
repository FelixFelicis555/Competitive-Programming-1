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
#define vll vector<ll>
#define vul vector<ull>
#define vii vector<pii>
#define vvi vector<vector<int>>
#define vvii vector<vector<pii>>
#define vvl vector<vector<l>>
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define lp(i,n) 	for(int i=0;i<n;i++)
#define lpd(i,n)    	for(int i=n;i>=0;i--)
#define lp1(itr,start,stop)     for(int itr=start;itr<stop;itr++)
#define lpd1(itr,start,stop)     for(int itr=start;itr>stop;itr--)
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
   cin>>TESTS;
   while(TESTS--){
   		int n;
   		cin>>n;
   		char s[n+1];
   		lp(i,n){
   			cin>>s[i];
   		}
   		vi a;
   		lp(i,n){
   			if(s[i] == 'A')
   				a.pb(i+1);
   		}
   		// lp(i,a.size()){
   		// 	cout<<a[i]<<" ";
   		// }
   		// cout<<endl;
   		if(a.size()==0){
   			cout<<0<<endl;
   		}
   		else{
   		int b[a.size()];
   		rep(i,0,a.size()-1){
   			
   			b[i] = a[i+1] - a[i];
   		}
   		b[a.size()-1] = n - a[a.size()-1];
   		sort(b,b+a.size());
   		if(b[0]==0){
   			cout<<0<<endl;
   		}
   		else
   			cout<<b[a.size()-1]<<endl;
   	}
   	}
   return 0;
}
 