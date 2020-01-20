#include<bits/stdc++.h>
using namespace std;

void build(int* arr, int* tree, int start, int end, int tnode){
	if(start == end){
		tree[tnode] = arr[start];
		return;
	}

	int mid = (start+end)/2;

	build(arr,tree,start,mid,2*tnode+1);
	build(arr,tree,mid+1,end,2*tnode+2);

	tree[tnode] = tree[2*tnode+1] + tree[2*tnode+2];
}

int main(){
	int arr[] = {1,2,3,4,5,6};
	int* tree = new int[16];
	build(arr,tree,0,5,0);

	for(int i = 0;i<16;i++){
		cout<<tree[i]<<endl;
	}
	return 0;
}