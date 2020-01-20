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
    int m,s,q,r,t=9,flg=1;
        string ans="";
        cin>>m>>s;
        if(s==0&&m==1){cout<<0<<" "<<0;return 0;}
        if(!(1<=s&&s<=9*m)){cout<<-1<<" "<<-1;return 0;}
        while(t)
        {
            q=s/t;
            r=s%t;
            if(q)break;
            t--;

        }
        //cout<<"q= "<<q<<" r="<<r<<" "<<"t= "<<t<<'\n';
        for(int i=0;i<m;i++)
        {
            if(i<q)ans+=char(t+'0');
            else if(flg){ans+=char(r+'0');flg=0;}
            else ans+='0';
        }
        string mini=ans;
        reverse(mini.begin(),mini.end());
        if(mini[0]=='0')
        {
            for(int i=1;i<mini.size();i++)
                if(mini[i]!='0')
            {
                mini[0]='1';
                mini[i]-=1;
                break;
            }
        }
        cout<<mini<<" "<<ans;
        return 0;
    
}