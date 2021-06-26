#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	string t1,t2;
	int at1=0,at2=0,flag=0;
	for(int k=0;k<n;k++){
		string s;
		cin>>s;
		if(k==0){
			t1=s;
			at1+=1;
			continue;
		}
		if(s==t1)
			at1+=1;
		else{
			t2=s;
			at2+=1;
		}
	
	}
	if(at1>at2)
		cout<<t1;
	else
		cout<<t2;

	return 0;
}


			

