#include<iostream>

using namespace std;

int is_prime(int n){
	
	if(n<=1) return false;

	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	return true;
}


int main(){
	int n,m;
	cin>>n>>m;
	int flag=0;
	if(n<=1 && m==2){
		cout<<"YES";
		flag=1;}
	int test=n;
	if(n>m)
		cout<<"NO";
	while(test<=m){
		test++;
		if(is_prime(test)){
			if(test==m){
			cout<<"YES";
			flag=1;
			break;
		}
		else{
			cout<<"NO";
			flag=1;
			break;
		}
	}
	}
	if(flag==0)
		cout<<"NO";

			
	return 0;
}
