#include<stdio.h>
#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	int upper=0,lower=0;
	for(int i=0;i<s.length();i++){
		char test=s[i];
		if(isupper(test))
			upper++;
		else
			lower++;
	}
	if(upper >lower)
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	else if(upper<lower || upper ==lower)
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout<<s;
	return 0;
}
