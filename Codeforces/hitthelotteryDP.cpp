 
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

ll coinsNeededDP(int coins[],ll amount,int n){
    ll *dp = new ll[amount+1];

    for(ll i=0;i<=amount;i++){
        dp[i] = 1000000009;
    }



    dp[0] = 0;
    for(ll rupay=1; rupay<=amount;rupay++){

        for(int i=0;i<n;i++){

            if(coins[i]<=rupay){

                ll smallerAns = dp[rupay-coins[i]];
                if(smallerAns!=1000000009){
                    dp[rupay] = min(dp[rupay],smallerAns + 1);
                }

            }

        }
    }


    return dp[amount];

}

int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   int coins[] = {1,5,10,20,100};
   ll n;
   cin>>n;
   cout<<coinsNeededDP(coins,n,5)<<endl;
   return 0;
}
 