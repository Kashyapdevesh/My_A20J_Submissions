#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sum=0;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1])
			sum+=1;
	}
	cout<<sum;
	return 0;
}


