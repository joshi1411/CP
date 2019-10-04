#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m]={0};

	// for(int i=0;i<n;i++)
	// 	for(int j=0;j<m;j++)
	// 		cin>>a[n][m];
	int s[n][m];
	s[0][0]=1;
	for(int i=0;i<n;i++)
		s[i][0]=1;
	for(int i=0;i<m;i++)
		s[0][i]=1;

	for(int i=1;i<n;i++)
		for(int j=1;j<m;j++)
			s[i][j]=s[i-1][j]+s[i][j-1];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<s[i][j]<<" ";
		cout<<endl;
	}


}