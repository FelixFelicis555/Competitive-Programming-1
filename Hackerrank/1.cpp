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

ll sum1(ll* s,int i){
    ll summ = 0;
    loop(j,i){
        summ +=s[j];
    }
    return summ;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Uncomment the following lines if input and output is stored in different files.
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);

    ll n,q,p,l,c = 0;
    cin>>n>>q;
    ll s[n];
    loop(i,n){cin>>s[n];}
    vii v;
    loop(i,q){
        cin>>p>>l;
        v.push_back(make_pair(p,l));
    }

    sort(s,s + n);
    loop(i,q){
        loop(j,n){
            if(v[i].first < s[0])
                c=0;
            
            else if(v[i].first - sum1(s,j) > s[j+1])
                c++;
        }
        if(c > v[i].second)
            cout<<v[i].second<<"\n";
        else
        {
            cout<<c<<"\n";
        }
        
    }
}