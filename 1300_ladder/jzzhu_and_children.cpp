#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,m,ans=0;
	cin>>n>>m;
	double a,max=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(ceil(a/m)>=max){
			max=ceil(a/m);
			ans=i+1;
		}
	}
	cout<<ans;
	return 0;
}
