#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a,b,temp=0;
	int test=n,max=0;
	while(test--){
		cin>>a>>b;
		if(test==n){
			temp=b;
			max=b;
			continue;
		}
		temp=(temp-a)+b;
		if(temp>max)
			max=temp;
	}
	cout<<max;
	return 0;
}
