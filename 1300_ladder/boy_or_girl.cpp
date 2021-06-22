#include<iostream>
#include<numeric>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<s.length();i++){
		int test=s[i]-97;
		a[test]=1;
	}
	int sum=0;
	for(int i=0;i<26;i++)
		if(a[i]==1)
			sum++;

	if(sum%2==0)
		cout<<"CHAT WITH HER!";
	else 
		cout<<"IGNORE HIM!";
	return 0;
}
