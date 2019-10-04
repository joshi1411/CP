#include<bits/stdc++.h>

using namespace std;

int editDis(string s1, string s2)
{
	int n = s1.size();
	int m = s2.size();
	int dp[n+1][m+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;i++)
		dp[i][0]=i;
	for(int i=0;i<=m;i++)
		dp[0][i]=i;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(s1[i]==s2[j])
				dp[i][j]=dp[i-1][j-1];
			else{
				dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	return dp[n][m];
}
int main()
{
	editDis("saturday","saturda");
}