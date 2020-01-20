#include<bits/stdc++.h> 
using namespace std; 
  

void printUnique(int l, int r) 
{ 
    
    for (int i=l ; i<=r ; i++) 
    { 
        int num = i; 
        bool visited[10] = {false}; 
  
        
        while (num) 
        { 
           
            if (visited[num % 10]) 
                break; 
  
            visited[num%10] = true; 
  
            num = num/10; 
        } 
  
       
        if (num == 0){ 
            cout<<i<<"\n";
            return;
        }
        // else{
        //     cout<<"-1"<<"\n";
        //     break;
        // }
    } 
    cout<<"-1"<<endl;
} 
  
int main() 
{ 
    int l,r; 
    cin>>l>>r;
    printUnique(l,r);
    return 0; 
} 