#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;cin>>n;
	int n0=0,n5=0,a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0)
			n0+=1;
		else if(a[i]==5)
			n5+=1;
	}
	n5=floor(n5/9)*9;
	if(n0==0)
		cout<<"-1";
	else if(n5==0)
		cout<<0;
	else{
		while(n5--)
			cout<<5;
		while(n0--)
			cout<<0;
	}

	return 0;
}

