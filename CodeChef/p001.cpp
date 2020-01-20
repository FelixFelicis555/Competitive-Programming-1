#include <iostream>
#include <vector>
using namespace std;

#define ull unsigned long long int
#define ll long long int

ll absolute(ll x) {
	if(x<=0) return -x;
	else return x;
}

ull get_count(vector<int> root, int n) {
	ull sum=0;
	ll coeff[n+1]={};
	
	coeff[n]=1;
	for(int i=1; i<=n; i++) {
		for(int j=n-i-1; j<n; j++) {
			coeff[j] = coeff[j] + (-1) * root[i-1] * coeff[j+1];
		}
	}

	for(int i=0; i<=n; i++) {
		sum = sum + absolute(coeff[i]) % 1000000007;
	}

	return sum;	
}

int main() {
	/*
		n: sequence length
		k: subsequence length
		fa: frequency array
		root: vector that stores roots
		y: final count % MOD
	*/
	int n, k;
	int fa[8001]={};
	vector<int> root;
	ull y;

	
	
		scanf("%d%d", &n, &k);
		
		for(int i=0; i<=n-1; i++) {
			int j;
			scanf("%d", &j);
			fa[j]++;
		}

		for(int i=2; i<=8000; i++) {
			if(fa[i]!=0) root.push_back(fa[i]);
		}

		/*
			root[i] can be max 10e5
			length of vector root can be max 8000
		*/

		y = get_count(root, root.size());
		printf("%llu\n", y);
	
	return 0;
}