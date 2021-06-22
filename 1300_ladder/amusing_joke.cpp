#include<iostream>
using namespace std;

int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a[26]={0};
	int b[26]={0};
	for(int i=0;i<s1.length();i++){
		int test=s1[i];
		a[test-65]+=1;
	}
	for(int i=0;i<s2.length();i++){
                int test=s2[i];
                a[test-65]+=1;
        }
	for(int i=0;i<s3.length();i++){
                int test=s3[i];
                b[test-65]+=1;
        }
	int flag=0;
	for(int i=0;i<26;i++)
		if(a[i]!=b[i])
			flag=1;
	if(flag==1)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
