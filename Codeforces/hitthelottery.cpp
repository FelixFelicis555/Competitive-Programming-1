#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;


int main()
{
    ll n,ck = 0;

    cin>>n;

    while(n!=0){
        if(n>=100){
            n-=100;
            ck++;
        }
        else if(n>=20){
            n-=20;
            ck++;
        }
        else if(n>=10){
            n-=10;
            ck++;
        }
        else if(n>=5){
            n-=5;
            ck++;
        }
        else if(n>=1){
            n-=1;
            ck++;
        }
    }
    cout<<ck<<endl;
}