#include<bits/stdc++.h>

using namespace std;

// memoised approach
int memo[100]={0};
int fib(int n)
{
	if(memo[n]==0){
		if(n<=1)
			memo[n]=1;
		else
			memo[n] = fib(n-1)+fib(n-2);
	}
	return memo[n];
}


// bottom up approach
int* fib_up(int n)
{
	int f[n+1];
	f[0]=0;f[1]=1;
	for(int i = 2; i<=n;i++)
		f[i] = f[i-1]+f[i-2];
	return f;
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	// for(int i=0;i<=n;i++)
	// 	memo[i]=-1;

	// cout<<"\n fb : "<<fib(n);
	fib(n);
	int a[n+1]=
	for(int i=1;i<=n;i++)
		cout<<memo[i]<<" ";
}