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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll h,w;
    cin>>h>>w;
    ll r[h],c[w];
    loop(i,h){cin>>r[i];}
    loop(i,w){cin>>c[i];}
    ll count = 0;
    loop(i,h){
        loop(j,w){
            if(i<c[j]&&j<r[i])
                     continue;
 
                else if(i<c[j])
                {
                    if(r[i]==j)
                    {
 
                        cout<<0;
                        return 0;
                    }
 
 
                }
                else if(j<r[i])
                {
                    if(c[j]==i)
                    {
 
                        cout<<0;
                        return 0;
                    }
 
 
                }
                else
                {  
                    if(r[i]==j||c[j]==i)
                        continue;
                    else
                    {
                        count++;
 
                    }
                }
        }
    }
    ll ans=1;
    for(int i=0;i<count;i++){
        ans = (ans*2)%M;
    }
    cout<<ans%M;
    return 0;
}