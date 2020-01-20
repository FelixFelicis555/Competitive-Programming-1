 
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    string s;
    int a[100001],m;

    cin>>s;
    int len = s.length();

    a[1] = 0;
    for (int i = 1; i < len; ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }
    cin>>m;
    while (m--){
        int l,r;
        cin>>l>>r;
        cout<<a[r] - a[l]<<"\n";
    }
    return 0;
}
 