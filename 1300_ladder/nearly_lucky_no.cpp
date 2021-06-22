#include<iostream>

using namespace std;

int main(){
	string n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n.length();i++){
		if(n[i]=='4' || n[i]=='7')
			sum+=1;
	}
	if(sum==4 || sum==7)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}
