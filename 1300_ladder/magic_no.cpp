#include<iostream>

using namespace std;

int main(){
	string s;
	cin>>s;
	int flag=0,flag1=0,flag4=0;
	for(int i=0;i<s.length();i++){
		if(s[i]!='1' && s[i]!='4'){
			flag=1;
			break;
		}
		if(s[i]=='1'){
			flag1=1;
			flag4=0;
		}
		if(s[i]=='4')
		{
			if(flag1==1 && flag4==0)
				flag4=1;
			else if(flag1==1 && flag4==1){
				flag1=0;
				flag4=0;
			}
			else if(flag1==0 && flag4==0)
				flag=1;
		}
	}
	if(flag==1)
		cout<<"NO";
	else 
		cout<<"YES";
		
	return 0;
}
