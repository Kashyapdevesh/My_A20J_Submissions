#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int k;
	cin>>k;
	int a[12];
	for(int i=0;i<12;i++)
		cin>>a[i];
	sort(a,a+12);
	int sum=0,c=0,flag=0;
	for(int i=11;i>=0;i--){
		if(k==0){
			flag=1;
			cout<<"0";
			break;
		}
		sum+=a[i];
		c++;
		if(sum>=k){
			cout<<c;
			flag=1;
			break;}
	}
	if(flag==0)
		cout<<"-1";
	return 0;
}

