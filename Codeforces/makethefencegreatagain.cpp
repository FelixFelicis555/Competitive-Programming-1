 
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

bool isunique(ll a[],int n){
	int flg = 0;
	loop(i,n-1){
		if(a[i] == a[i+1] )
			flg = 1;
	}
	if(flg == 1)
		return false;
	else
		return true;
}

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T = 1;
   cin>>T;
   while(T--){
   		int n;
   		cin>>n;		
        ll a[n],b[n],count = 0;
        loop(i,n){
        	cin>>a[i]>>b[i];
        }
        while(!isunique(a,n)){
        	int j;
        	loop(i,n-1){
        		if(a[i] == a[i+1]){
        			j = i;
        			break;
        		}
       		}
       		int mini = min(b[j],b[j+1]);
       		count += mini;
       		if(mini == b[j])
       			a[j]+=1;
       		else
       			a[j+1]+=1;


    	}
    	cout<<count<<"\n";
   }
   return 0;
}
 