#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a;
	int maxi=0,mini=0,maxval=0,minval=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>maxval){
			maxval=a;
			maxi=i;
		}
		if(a<=minval){
			minval=a;
			mini=i;
		}
	}
	cout<<((maxi+(n-1-mini))-(maxi>mini?1:0));
	return 0;
}
