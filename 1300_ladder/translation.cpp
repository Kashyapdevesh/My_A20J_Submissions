#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	string test;
	cin>>test;
	reverse(test.begin(),test.end());
	if(s==test)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}

