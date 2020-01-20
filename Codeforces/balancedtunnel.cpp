 
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

int findindex(int b[],int x,int n){
	// int n = sizeof(b)/sizeof(b[0]);
	for(int i = 0;i<n;i++){
		if(b[i] == x)
			return x;
		else
			return -1;
	}
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vi a(n), b(n);
  loop(i,n) {
    cin >> a[i];
    --a[i];
  }
  loop(i,n) {
    cin >> b[i];
    --b[i];
  }
  vi pos(n);
  loop(i,n) {
    pos[b[i]] = i;
  }
  vi c(n);
  loop(i,n) {
    c[i] = pos[a[i]];
  }
  int mx = -1, ans = 0;
  loop(i,n) {
    if (c[i] > mx) {
      mx = c[i];
    } else {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}