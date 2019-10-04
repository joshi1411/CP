#include<iostream>

using namespace std;
int a[100][100];
int mapple(int a[][100],int n,int m)
{
	int s[n][m]={0};
	s[0][0]=a[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			s[i][j]=a[i][j]+max( ((i>0)?s[i-1][j]:0) , (j>0)?s[i][j-1]:0);
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<s[i][j]<<" ";
		cout<<endl;
	}
	cout<<"Max : "<<s[n-1][m-1];
}

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	mapple(a,n,m);

}