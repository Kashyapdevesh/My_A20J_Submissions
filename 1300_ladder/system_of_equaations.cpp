#include<iostream>

using namespace std;

int main(){
	int n,m,c=0;
	cin>>n>>m;
	for(int a=0;a*a<=n && a<=m;++a){
		int b=n-a*a;
		if(a+b*b==m)
			c+=1;
	}
	cout<<c;
	return 0;
}

