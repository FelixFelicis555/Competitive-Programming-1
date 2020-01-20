#include<bits/stdc++.h> 
typedef long long ll;
using namespace std; 
  
int digSum(ll n) 
{ 
    if (n == 0)  
       return 0; 
    return (n % 9 == 0) ? 9 : (n % 9); 
} 
int main(){
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        int arr[n+1];
        for(ll i = 1;i<=n;i++){
            arr[i] = digSum(i);
        }
        ll index = 1;
        int max = arr[1];
        for(ll i = 1;i<=n;i++){
            if (max < arr[i] && arr[i]!=arr[i-1]) 
			{
				max = arr[i];
				index = i;
			}
        }
        cout<<index+1<<"\n";
    }
}