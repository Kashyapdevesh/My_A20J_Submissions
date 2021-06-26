#include<iostream>

using namespace std;

int main(){
	long int n;
	cin>>n;
	if(n==0)
		cout<<"0 0 0";
	if(n==1)
		cout<<"0 0 1";
	int t1=0,t2=1;
	int nt=t1+t2;

	while(nt<=n){
		t1=t2;
		t2=nt;
		nt=t1+t2;
		if(nt==n)
			cout<<"0"<<" "<<t1<<" "<<t2;
	}
	return 0;
}

