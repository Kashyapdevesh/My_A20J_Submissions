#include<iostream>
#include<algorithm>
using namespace std;
bool comp (int a, int b){
	return(a < b);}
int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int test1=((k*l)/(nl));
	int test2=(c*d);
	int test3=(p/np);
	cout<<min({test1,test2,test3},comp)/n;
	return 0;
}
	
