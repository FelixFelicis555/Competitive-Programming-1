#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define cap(x)         isupper(x)
#define sm(y)         islower(y)
#define double long double
using namespace std;
 
#define N  100005
 
int main()
{
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
//    cin>>TESTS;
    while(TESTS--)
    {
         double k,d,t;
        cin>>k>>d>>t;
        if((int)k%(int)d==0)
        {
            cout<<fixed<<setprecision(12)<<t;
            return 0;
        }
         double on=k,off=0,comb=0;
        if(k<d)
        {
          off=d-k;
          comb=(k/t)+((1/(2*t))*(d-k));
        }
        else
        {
            off=d*((int)(k/d)+1)-k;
            comb=(k/t)+((1/(2*t))*(d*((int)(k/d)+1)-k));
        }
         double n=(int)(1/comb);
         double ans=(on+off)*n;
        // cout<<"on:"<<on<<"off: "<<off<<"ans: "<<ans<<" ";
         double rem=1-n*comb;
         double x=rem*t;
        if(x<=k)
        {
            ans+=x;
            cout<<fixed<<setprecision(12)<<ans;
            return 0;
        }
        else ans+=k;
        rem-=k/t;
        double y=rem*2*t;
        ans+=y;
        cout<<fixed<<setprecision(12)<<ans;
    }
    return 0;
}