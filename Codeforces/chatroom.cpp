#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string q = "hello";
    int i=0;
    char n = q[i];
    for(int j=0;j<s.length();j++){
        if(s[j]==q[i]){
            i++;
        }
    }
    if(i==5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}