/******************************************
* AUTHOR : Ashish Joshi* 
* INSTITUTION : NIT Hamirpur *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
int dp[100]={0};
int cdis(int n)
{
	if(n<0) return 0;
	if(n==0) return 1;
	if(dp[n]==0)
	{
		dp[n]=cdis(n-1) + cdis(n-2) + cdis(n-3);
	}
	return dp[n];

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int n;
cin>>n;
cout<<cdis(n)<<endl;
for(int i=0;i<=n;i++)
	cout<<dp[i]<<" ";
return 0;
}