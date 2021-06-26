#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	int a,b,c;
	a=sqrt((x*y)/z);
	b=sqrt((x*z)/y);
	c=sqrt((z*y)/x);
	cout<<(a+b+c)*4;
	return 0;
}


