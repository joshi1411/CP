#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];

	int s[n][m];
	// s[0][0]=a[0][0];
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;i<m;j++)
	// 	{
	// 		s[i][j]=a[i][j]+max(((i>0) ? s[i-1][j]:0) , ((j>0)?s[i][j-1]:0));
	// 	}
	// }
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			s[i][j]=a[i][j]+max( ((i>0)?s[i-1][j]:0) , (j>0)?s[i][j-1]:0);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<s[i][j]<<" ";
		cout<<endl;
	}

return 0;
}