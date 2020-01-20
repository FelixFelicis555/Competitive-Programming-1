#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a[1000][3],count=0;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if((a[i][0]==1 && a[i][1]==1) || (a[i][1]==1 && a[i][2]==1) || (a[i][0]==1 && a[i][2]==1)){
            count++;
        }
    }
    cout<<count<<'\n';
    return 0;
}