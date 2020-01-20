 
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
typedef vector<tuple<int,int,int> > vt;
typedef pair<int, int> pii;

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T ;
   cin>>T;
   while(T--){
   		int a[3][3],flg = 0;
        loop(i,3){
        	loop(j,3){
        		cin>>a[i][j];
        	}
        }
        vt p;
        p.push_back(make_tuple(a[0][0],a[0][1],a[0][2]));
        p.push_back(make_tuple(a[1][0],a[1][1],a[1][2]));
        p.push_back(make_tuple(a[2][0],a[2][1],a[2][2]));

        sort(p.begin(), p.end());
        loop(i,2){
        	if(p[i].second() >= p[i+1].second() && p[i].third() >= p[i+1].third() )
        		flg = 1;
        }
        if(flg == 1)
        	cout<<"yes"<<endl;
        else
        	cout<<"no"<<endl;

   }
   return 0;
}
 