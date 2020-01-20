#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,flg=0;
        cin>>n>>m;
        int a[m],b[n]={0};
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        if(n>m){
            cout<<"YES"<<"\n";
        }
        // for(int i=0;i<m;i++){
        //     b[a[i]-1] += 1;
        // }
        else{
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
                if(a[i] == a[j])
                    flg = 1;
        }
        if(flg == 1)
            cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
        }
        }
    }
    return 0;
}