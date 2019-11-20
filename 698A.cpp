/******************************************
* AUTHOR : Ashish Joshi* 
* INSTITUTION : NIT Hamirpur *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define loop(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define set(b,i) (b|(1<<i))
#define unset(b,i) (b&!(1<<i))
#define cbit(b,i) bool(b&(1<<i))
// int noRest(int d,int last)
// {
// 	if(d<0)return 0;
// 	if(a[d]==0 || last==a[d]){
// 		dp[d] = 1 + noRest(d-1,0);
// 	}
// 	else if(a[d]==3)
// 	{
// 		dp[d] = min(1+noRest(d-1,0),min(noRest(d-1,1),noRest(d-1,2)));
// 	}else if(a[d]==2)
// 	{
// 		dp[d] = min(1+noRest(d-1,0), noRest(d-1,1));
// 	}else if(a[d]==1)
// 	{
// 		dp[d] = min(1+noRest(d-1,0), noRest(d-1,2));
// 	}
// 	return dp[d];
// }

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
int dp[101][3]={0},a[101];

//ios_base& scientific (ios_base& str);
cin>>n;
for(int i=0;i<n;i++)cin>>a[i]; // gym,contest
// noRest(n-1,0);
if(a[0]==0)
	dp[0][0]=0,dp[0][1]=0,dp[0][2]=0;
else if(a[0]==1)
	dp[0][0]=0,dp[0][1]=1,dp[0][2]=0;
else if(a[0]==2)
	dp[0][0]=0,dp[0][1]=0,dp[0][2]=1;
else dp[0][0]=0,dp[0][1]=1,dp[0][2]=1;

// ll r[3]={0};
// int last=j;
for(int i=1;i<n;i++)
{
	int m=0;
	for(int j=0;j<i;j++)
		for(int k=0;k<3;k++)
			m=max(dp[j][k],m);

	dp[i][0]=m;
	if(a[i]==1 || a[i]==3)
	{
		dp[i][1] = max(dp[i-1][0] + 1,dp[i-1][2]+1);
	}
	if(a[i]==2 || a[i]==3)
		dp[i][2] = max(dp[i-1][0]+1,dp[i-1][1] +1);
}
// for(int i=0;i<n;i++)
// {
// 	for(int j=0;j<3;j++)
// 		cout<<dp[i][j]<<" ";
// 	cout<<endl;
// }
int m=0;
for(int k=0;k<3;k++)
		m=max(dp[n-1][k],m);
cout<<(n-m);
return 0;
}