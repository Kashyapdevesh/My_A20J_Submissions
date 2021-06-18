#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int X=0,Y=0;
	while(X<5){
		int test;
		cin>>test;
		if (test==1)
			break;
		//(Y%5==0 ? X+=1,Y=0: Y+=1);
		Y+=1;
		if(Y%5==0){
			X+=1;
			Y=0;
		}
	}
	//cout<<X<<" "<<Y<<" "; 
	int ans= (abs(X-2)+abs(Y-2));
	cout<<ans<<"\n";
	return 0;
}


