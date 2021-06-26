#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define pb push_back 
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0) 
#define ff first
#define ss second
//uncomment for cp
//#pragma GCC optimize("Ofast")  
//#pragma GCC target("avx,avx2,fma") 
//memset(a, 0, sizeof(a));
int a[3][3],x;
void inline solve() 
{
    int n=3;
	for (int i = 0; i < 3; i += 1)
	{
		for (int j = 0; j < 3; j += 1)
		{
			a[i][j]=1;
		}
	}
	for (int i = 0; i < 3; i += 1)
	{
		for (int j = 0; j < 3; j += 1)
		{
			cin>>x;
			if(x&1)
			{
			    a[i][j]=!a[i][j];
				if(i-1>=0) 
				{
				    //cout<<101<<endl;
					a[i-1][j] =!a[i-1][j];
				}
				if(i+1<n) 
				{
				    //cout<<102<<endl;
					a[i+1][j] =!a[i+1][j];
				}
				if(j-1>=0) 
				{
				    //cout<<103<<endl;
					a[i][j-1] =!a[i][j-1];
				}
				if(j+1<n) 
				{
				    //cout<<104<<endl;
					a[i][j+1] =!a[i][j+1];
				}
			}
			//cout<<a[i][j]<<" ";
		}
		//cout<<endl;
	}
	for (int i = 0; i < 3; i += 1)
	{
		for (int j = 0; j < 3; j += 1)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

	fastio;
	//int t;cin>>t;while(t--)
    solve();
}
