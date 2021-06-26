#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int min=INT_MAX,s1=0,s2=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=2;i<=n;i++){
		if(abs(a[i]-a[i-1])<min){
//			cout<<a[i]<<"-"<<a[i-1]<<"\n";
			min=abs(a[i]-a[i-1]);
			s1=i-1;
			s2=i;
//			cout<<s1<<" "<<s2<<"\n";
		}
	}
	int test=abs(a[1]-a[n]);
	if(test<min){
//		cout<<a[n]<<"-"<<a[1]<<"\n";
		min=test;
		s1=n;
		s2=1;
//		cout<<s1<<" "<<s2<<"\n";
	}
	cout<<s1<<" "<<s2;
	return 0;
}

		
