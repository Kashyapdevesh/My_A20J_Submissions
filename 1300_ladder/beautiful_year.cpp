#include<iostream>
#include<stdio.h>
#include<string.h>
#include<climits>
using namespace std;

int check_unique(int n){
	int a[10]={0};
	while(n){
		int rem=n%10;
		a[rem]=1;
		n/=10;
	}
	int sum=0;
	for(int i=0;i<10;i++){
		if(a[i])
			sum+=1;
	}
	return sum;
}

int check_digits(int n){
	int c=0;
	while(n){
		int rem=n%10;
		c++;
		n/=10;
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	int check =n;
	while(check<=INT_MAX)
	{
		int unique=check_unique(check+1);
		int digit=check_digits(check+1);
		if(unique==digit){
			cout<<check+1;
			break;
		}
		else
			check++;
	}
	return 0;
}




