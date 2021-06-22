#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string s;
	cin>>s;
	int c=0,a[1001];
	for(int i=0;i<s.length();i+=2)
		a[c++]=s[i]-'0';
	sort(a,a+c);
	for(int i=0;i<c;i++){
		cout<<a[i];
		if(i==c-1)
			break;
		cout<<"+";
	}
	return 0;
}
		
