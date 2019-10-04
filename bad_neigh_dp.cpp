#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int T[MAX]={0};
int msum(int a[],int n)
{
	T[0] =a[0];
	T[1] = max(a[1],a[0]);
	T[2] = max(T[0]+a[2],T[1]);
	for(int i=3;i<n;i++)
		T[i]=max(a[i]+T[i-2],T[i-1]);
	int m1=T[n-2];
	// T[0] =a[1];
	// T[1] = max(a[2],a[1]);
	// T[2] = max(T[0]+a[3],T[1]);
	// for(int i=3;i<n;i++)
	// 	T[i]=max(a[i+1]+T[i+1-2],T[i+1-1]);
	return max(T[n-1],m1);
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	msum(a,n);
	// for(int i=0;i<n;i++)
		// cout<<T[i];
}