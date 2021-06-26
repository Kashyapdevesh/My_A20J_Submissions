#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;cin>>n;
	int test=INT_MAX;
	int flag=0,ans=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a<test){
			test=a;
			ans=i;}
		else if(a==test)
			flag=a;
	}
	if(flag==test )
		cout<<"Still Rozdil";
	else 
		cout<<ans;
	return 0;
}
