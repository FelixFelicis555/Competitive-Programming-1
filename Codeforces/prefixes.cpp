#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	string s; cin >> s;
	int ans = 0;
	string st = "";
	for(int i = 1; i < s.size(); i += 2) {
		int ans1 = (s[i - 1] != 'a') + (s[i] != 'b');
		int ans2 = (s[i - 1] != 'b') + (s[i] != 'a');
		if(ans1 < ans2) ans += ans1, st += "ab";
		else ans += ans2, st += "ba";
	}
	cout << ans << endl << st;
	return 0; 
} 