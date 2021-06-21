#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int a[3][3]={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int test;
			cin>>test;
			if(test%2!=0)
				a[i][j]=1;
		}
	}
	int ans[3][3]={1};
	int up=0,down=0,left=0,right=0;
	for(int i=0;i<3;i++){
		
		(i==2?down=0:down=1);
		(i==0?up=0:up=1);

		for(int j=0;j<3;j++){

			(j==0?left=0:left=1);
			(j==2?right=0:right=1);
			
			(a[i][j]==1?ans[i][j]=0:ans[i][j]=1);
			
			cout<<"\n"<<up<<" "<<down<<" "<<left<<" "<<right<<"\n";
			cout<<" "<<a[i][j]<<"\n";
			if(a[i][j]==1){
				if(up==1){
					cout<<"check:"<<i<<" "<<j<<"up"<< "\n";

					(ans[i-1][j]==1?ans[i-1][j]=0:ans[i-1][j]=1);
				}
				if(down==1){
					cout<<"check:"<<i<<" "<<j<<"down" "\n";
					(ans[i+1][j]==1?ans[i+1][j]=0:ans[i+1][j]=1);

				}
			 	if(left==1){
					cout<<"check:"<<i<<" "<<j<<"left"<<"\n";

					(ans[i][j-1]==1?ans[i][j-1]=0:ans[i][j-1]=1);
				}
			 	if(right==1){
					cout<<"check:"<<i<<" "<<j<<"right"<<"\n";

					(ans[i][j+1]==1?ans[i][j+1]=0:ans[i][j+1]=1);
					}
			}
		}
	}

cout<<"\n";
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<ans[i][j]<<" ";
	}
	cout<<"\n";
}
return 0;

}
