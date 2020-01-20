 
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

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll T = 1;
   cin>>T;
   while(T--){
   		int n;
        cin >> n;
        string a;
        cin >> a;
        int i, j;
        vector<int> v;
        for (i = 0; i < n; i++)
        {
            if (a[i] == '1')
                v.push_back(i);
        }
        if (v.size() < 1)
        {
            cout << n << "\n";
        }
        else
        {
            int t1 = v[0];
            int t2 = v[v.size() - 1];
            int k = max(n - t1, t2 + 1);
            cout << 2 * k << "\n";
        }
   }
   return 0;
}
 