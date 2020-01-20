#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main(){
    int T;
    
    cin>>T;
    
    while(T--){
        long long A,B,C,ans=0;
        cin>>A>>B>>C;
        for(long long i=2;i<=A;i++){
            for(long long j=2;j<=C;j++){
                for(long long k=1;k<=B;k++){
                    if(k*k < (i-1)*(j-1))
                        ++ans;
                }
            }
        }
        ans = ans%M;
        cout<<ans<<"\n";
    }
    return 0;
}