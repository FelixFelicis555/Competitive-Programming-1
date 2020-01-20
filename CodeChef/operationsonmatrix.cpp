     
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
        ll T;
        cin>>T;
        while(T--){
       		int n,m,q;
            cin>>n>>m>>q;
            int a[q],b[q],arr[q]={0},brr[q]={0};
          	for(int i = 0;i<q;i++){
          		cin>>a[i]>>b[i];
          	}
            for(int i = 0;i<q;i++){
              arr[a[i]-1] += 1;
              brr[b[i]-1] += 1;
            }
          	int xodd = 0, xeven = 0, yodd = 0, yeven = 0;
            for(int i = 0;i<n;i++){
              if(arr[i]%2 == 0)
                xeven++;
              else
                xodd++;
            }
            for(int i = 0;i<m;i++){
              if(brr[i]%2 == 0)
                yeven++;
              else
                yodd++;
            }
            int count = xodd*yeven + xeven*yodd;
          	cout<<count<<"\n";
        }
       return 0;
    }
     
    