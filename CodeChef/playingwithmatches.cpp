#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        int sum = a+b;
        vector<int> v;
        for(; sum; sum/=10)
        v.push_back( sum%10 );
        int freq[10]={0};
        for(int i=0;i<v.size();i++){
            freq[v[i]]++;
        }
        
        int ans = freq[0]*6 + freq[1]*2 + freq[2]*5 + freq[3]*5 + freq[4]*4 +freq[5]*5 + freq[6]*6 + freq[7]*3 + freq[8]*7 + freq[9]*6;
        cout<<ans<<"\n";
    }
    return 0;
}