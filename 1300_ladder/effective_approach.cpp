#include<iostream>

using namespace std;

int main(){
	int n,a,q;
	cin>>n;
	int index[1000001];
	for(int i=0;i<n;i++){
		cin>>a;
		index[a]=i;
	}
	int m;
	cin>>m;
	long long lsum=0,rsum=0;
	while(m--){
		cin>>q;
		lsum+=index[q]+1;
		rsum+=n-index[q];
		}

	cout<<lsum<<" "<<rsum;
	return 0;
}

