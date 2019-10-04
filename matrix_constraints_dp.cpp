/******************************************
* AUTHOR : Ashish Joshi* 
* INSTITUTION : NIT Hamirpur *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
// #define N 100005
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
#define N 3

int maxLen(int i,int j,int a[N][N],int dp[N][N])
{
	if(i<0 || i>=N || j<0 || j>=N)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	int x,y,z,w;
	x=y=z=w= INT_MIN;
	if(j<N-1 && (a[i][j]+1)==a[i][j+1])
		dp[i][j] = 1 + maxLen(i,j+1,a,dp);
	if(i<N-1 && (a[i+1][j])==a[i][j]+1)
		dp[i][j] = 1 + maxLen(i+1,j,a,dp);
	if(j>0 && (a[i][j]+1)==a[i][j-1])
		dp[i][j] = 1 + maxLen(i,j-1,a,dp);
	if(i>0 && (a[i-1][j])==a[i][j]+1)
		dp[i][j] = 1 + maxLen(i-1,j,a,dp);

	return dp[i][j];

}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		cin>>a[i][j];
int res=1;
int dp[n][n];
memset(dp,-1,sizeof(dp));

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(dp[i][j]==-1)
			maxLen(i,j,a,dp);
		res = max(res, dp[i][j]);
	}
}
cout<<res<<endl;


return 0;
}