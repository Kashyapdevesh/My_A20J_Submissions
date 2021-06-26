#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<7;i++)
		cin>>a[i];
	int h=0;
	while(1){
		if(h==7)
			h=0;
		sum+=a[h];
		h++;
		if(sum>=n){
			cout<<h;
			break;
		}
	}
	return 0;
}
