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
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
using namespace std;
  
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
//    cin>>TESTS;
    while(TESTS--)
    {
        int n,k;
        cin>>n>>k;
        queue<int>q,sh;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            vector<int>v;
            int op=sh.size();
            for(int j=0;j<op;j++)
            {
                v.pb(sh.front());
                sh.pop();
 
            }
            sort(v.begin(),v.end());
            if(binary_search(v.begin(),v.end(),a))
               {
                   sh=q;
                   continue;
               }
            else
               {
                    q.push(a);
               }
 
            if(q.size()>k)
                q.pop();
 
            sh=q;
 
        }
        stack<int>s;
        int op=q.size();
        for(int i=0;i<op;i++)
        {
            s.push(q.front());
            q.pop();
        }
        cout<<op<<'\n';
        for(int i=0;i<op;i++)
        {
            cout<<s.top()<<" ";
            s.pop();
        }
    }
    return 0;
}