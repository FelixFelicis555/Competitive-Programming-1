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
#define vul vector<ull>
#define vii vector<pii>
#define vll vector<pll>
#define vvi vector<vector<int>>
#define vvii vector<vector<pii>>
#define vvl vector<vector<l>>
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>
 
#define lp(i,n) 	for(i=0;i<n;i++)
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
   cin>>TESTS;
   while(TESTS--){
   		int x,y;
   		cin>>x>>y;

   		
   		if(x==1){
   			if(y==1)
   				cout<<"YES"<<endl;
   			else
   				cout<<"NO"<<endl;
   		}
   		else if(x==2){
   			if(y < 4)
   				cout<<"YES"<<endl;
   			else
   				cout<<"NO"<<endl;
   		}
   		else if(x == 3){
   			if(y < 4)
   				cout<<"YES"<<endl;
   			else
   				cout<<"NO"<<endl;
   		}
   		else if(x > 3){
   			cout<<"YES"<<endl;
   		}

   }
   return 0;
}
 