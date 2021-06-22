#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	double a=0.0,sum=0.0;
	for(int i=0;i<n;i++){
		cin>>a;
		sum+=a;
	}
	cout<<sum/n;
	return 0;
}
