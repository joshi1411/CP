#include<bits/stdc++.h>

using namespace std;
#define MAX 100

int min1[MAX];


int coin(int v[],int n,int sum)
{
	// cout<<min1[0];
	min1[0]=0;
	for(int i=1;i<=sum;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(v[j]<=i && min1[i-v[j]]+1 < min1[i])
				min1[i] = min1[i-v[j]]+1;
		}
		cout<< i<<" : "<<min1[i]<<endl;
	}

}


int main()
{
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i =0;i<MAX;i++)
		min1[i] = INT_MAX;
	min1[0]=0;
	coin(v,n,20);

}