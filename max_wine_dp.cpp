#include<bits/stdc++.h>
using namespace std;
int a[100];
int c=0;
int N;
int memo[100][100]={0};
int maxWines(int b,int e)
{
	int year = N -(e-b);

	if(b>e)
		return 0;
	if(memo[b][e]==0)
	{	
		// c++;
		memo[b][e]=max(maxWines(b+1,e)+a[b]*year , maxWines(b,e-1)+a[e]*year);
	}
	return memo[b][e];
}

int main()
{
	int n;
	cin>>n;
	// int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	N = n;
	cout<<maxWines(0,n-1)<<endl;
	cout<<c<<endl;
return 0;
}