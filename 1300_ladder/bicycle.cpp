#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int c=0,max=0;
	for(int i=0;i<m;i++){
//		cout<<"\n\n"<<b[i]<<"\n\n";
		for(int j=0;j<n;j++){
//			cout<<a[j]<<"\n";
			if(b[i]%a[j]==0){
				if(b[i]/a[j]>max){
					max=b[i]/a[j];
					c=1;
				}
				else if (b[i]/a[j]==max)
					c+=1;
			}
		}
	}
	cout<<c;
	return 0;
}
