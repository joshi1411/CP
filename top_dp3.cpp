#include<bits/stdc++.h>

using namespace std;
#define MAX 100
int S[MAX];
int* LNDEC(int a[], int n)
{
	for(int i=0;i<n;i++)
		S[i]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i])
				if(S[j]+1 > S[i])
					S[i]=S[j]+1;
		}
	}
	cout<<S[n-1];
	return S;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	LNDEC(a,n);
	cout<<endl;
	for(int i:S)
		cout<<i<<" ";
}