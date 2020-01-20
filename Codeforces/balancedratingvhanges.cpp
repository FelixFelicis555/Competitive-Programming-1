 
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
typedef vector<float> vf;
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
   		cin>n;
   		int a[i];
   		loop(i,n){cin>>a[i];}
   		vf odd;
   		loop(i,n){
   			if(a[i]%2 == 1)
   				odd.push_back(a[i]);
   		}
   		vf oddhalf;
   		loop(i,odd.size()){
   			oddhalf[i] = odd[i]/2;
   			oddhalf[i] = oddhalf[i] - floor(oddhalf[i]);
   		}
        float sum = 0;
        loop(i,oddhalf.size()){
        	sum+=oddhalf[i];
        }
        vi even;
        loop(i,n){
        	even.push_back()
        }
   }
   return 0;
}
 