#include<iostream>

using namespace std;

#define ll long long int 
#define lim 1000000007

int memo[100000]={0};

ll fact(ll n)
{
	if(n<=1)
		memo[n]= 1;
	if(memo[n]==0)
		memo[n]= (n*fact(n-1))%(lim);
	return memo[n];

}

int main()
{	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<fact(n)<<endl;
	// cout<<endl;

	// for(int i=0;i<n;i++)
	// 	cout<<memo[i]<<" ";

	// cout<<endl;
	}
}