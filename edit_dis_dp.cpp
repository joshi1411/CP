#include<bits/stdc++.h>

using namespace std;

//Levevnshtein distance

//operations applicable:
// insertion,deletion,replacement

int editDistance(string s1,string s2)
{
	int m=s1.size();
	int n=s2.size();
	//dp[i][j] will hold dis. bw first "i chars of source string" and first "j chars of target string"
	int dp[m+1][n+1];
	memset(dp,0,sizeof(dp));
	
	//for "null source" to target,everything has to be inserted (i.e. no. of operations = length of target)
	for(int i=1;i<=n;i++)
		dp[0][i]=i;
	// for "null target" everthing has to removed (i.e no of op =length of source)
	for(int i=1;i<=m;i++)
		dp[i][0]=i;


	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(s1[i-1] == s2[j-1])
				dp[i][j] = dp[i-1][j-1];
			else{
				dp[i][j] = 1+min(dp[i-1][j-1],//substitution
								 min(dp[i][j-1],//deletion
								 dp[i-1][j]));//insertion
			}
		}
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	return dp[m][n];
}


int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;
	cout<<"\n"<<editDistance(s1,s2);
	return 0;

}