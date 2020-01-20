int Solution::maximumGap(const vector<int> &A) {
	vector<pair<int,int>> v;
	for(int i =0;i<A.size();i++){
		v.push_back(make_pair(A[i],i));
	}
	sort(v.begin(),v.end());
	int curr_min = INT_MAX;
	int diff = 0;
	for(int i = 0;i<A.size();i++){
		if(v[i].second < curr_min)
			curr_min = v[i].second;
		if(v[i].second - curr_min > diff)
			diff = v[i].second - curr_min;
	}
	return diff;
}