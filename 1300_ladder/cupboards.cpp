#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int l,r;
	int ls=0,rs=0;
	for(int i=0;i<n;i++){
		cin>>l>>r;
		if(l==1)
			ls+=1;
		 if(r==1)
			rs+=1;
	}
	cout<<(ls<rs?(ls+(n-rs)):(rs+(n-ls)));
	return 0;
}

