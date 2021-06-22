#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int min,max,ap=0;
	cin>>a[0];
	min=a[0];
	max=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
			ap++;
		}
		if(a[i]<min){
			min=a[i];
			ap++;
		}
	}
	cout<<ap;
	return 0;
}

