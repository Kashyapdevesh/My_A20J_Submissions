#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string a1,a2;
	cin>>a1>>a2;
	int res[a1.length()];
	for(int i=0;i<a1.length();i++){
		if(a1[i]==a2[i])
			res[i]=0;
		else
			res[i]=1;
	}
	for(int i=0;i<a1.length();i++)
		cout<<res[i];
	return 0;
}
