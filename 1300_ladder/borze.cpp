#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='.' && flag==0)
			cout<<"0";
		else if(s[i]=='.' && flag==1)
			{cout<<"1";flag=0;}
		else if(s[i]=='-' && flag==0)
			flag=1;
		else if(s[i]=='-' && flag==1)
			{cout<<"2";flag=0;}
	}
	cout<<"\n";
	return 0;
}
