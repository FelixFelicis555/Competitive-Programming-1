#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i =0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum +=a[i];
    }
    int count = 0;
    int currsum = 0;
    for(int i=n-1;i>=0;i--){
        currsum +=a[i];
        ++count;
        if(currsum > sum/2)
            break;
    }
    cout<<count<<endl;
    return 0;
}