#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		int l=0,r=0,u=0,d=0;
		for(int j=0;j<n;j++){
			if(a[j]==a[i]){
				if(b[j]>b[i])
					u+=1;
				else if(b[j]<b[i])
					d+=1;
				else if(b[j]==b[i])
					continue;
			}
			if(b[i]==b[j]){
				if(a[j]>a[i])
					r+=1;
				else if(a[j]<a[i])
					l+=1;
			}
		}
//		cout<<l<<" "<<r<<" "<<u<<" "<<d<<"\n";
		if(l>0 && r>0 && u>0 && d>0)
			count++;
	}
	cout<<count;



//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" "<<b[i]<<"\n";
//	}
	return 0;
}
