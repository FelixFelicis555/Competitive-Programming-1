 
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

int main()
{
    string s;
    cin>>s;
    int x1=s.find("AB");
    int x2=s.find("BA",x1+2);
   	int y1=s.find("BA");
   	int y2=s.find("AB",y1+2);
   	if((x1!=-1 && x2!=-1)  || (y1!=-1 && y2!=-1)){
    	cout<<"YES"<<endl;
   	}
   	else
    	cout<<"NO"<<endl;
    return 0;
}