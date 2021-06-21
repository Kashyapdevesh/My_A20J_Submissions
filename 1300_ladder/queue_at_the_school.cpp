#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	char a[n];
	int h=0;
	while(n--){
		cin>>a[h];
		h++;
	}
	while(t--){
		int flag=0,skip=0;
	for(int i=h-1;i>0;i--){
		if(a[i]=='G' && a[i-1]=='B' && flag==0){
			a[i-1]='G';
			a[i]='B';
			flag=1;
			skip++;
		}
		if(skip==1)
			flag=0;
		

	}
	}
	for(int i=0;i<h;i++)
		cout<<a[i];
	cout<<"\n";
	return 0;
}
