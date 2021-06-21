#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	char test=s[0];
	if(islower(test))
		test=toupper(test);
	s[0]=test;
	cout<<s;
	return 0;
	}
