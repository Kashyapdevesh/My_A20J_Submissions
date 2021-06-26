#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int c=0,sum=0;
	for(int i=0;i<n;i++){
		if(c>=m || a[i]>0)break;
		sum+=abs(a[i]);
		c++;
	}
	cout<<sum;
	return 0;
}


		
