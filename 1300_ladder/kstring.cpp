#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[26]={0};
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
		a[s[i]-97]+=1;
	int flag=0;
	for(int i=0;i<26;i++){
		if(a[i]%n!=0){
			cout<<"-1";
			flag=1;
			break;
		}
	}
	if(flag==0){
	int test=0;
	while(test<n){
		for(int i=0;i<26;i++){
			if(a[i]){
				cout<<(char)(i+97);
				a[i]--;
			}
		}
		test++;
	}
	}
	return 0;
}

