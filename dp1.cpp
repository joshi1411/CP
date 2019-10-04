#include<bits/stdc++.h>

using namespace std;

// with memo
int LCS(string X,string Y, int x, int y, auto &memo)
{
	if(x==0 || y==0)
		return 0;
	string s_key = to_string(x) + "|" + to_string(y);
	if(memo.find(s_key)==memo.end())
	{
		if(X[x-1] == Y[y-1])
			memo[s_key] = LCS(X,Y,x-1,y-1,memo) + 1;
		else
			memo[s_key] = max(LCS(X,Y,x-1,y,memo),LCS(X,Y,x,y-1,memo));
	}
	return memo[s_key];
}

int main()
{
	string X = "ABCBDAB" , Y = "BDCABA";

	unordered_map<string,int> memo;

	// cout<<"Length of LCS is :"<<LCS(X,Y,X.length(),Y.length());
	cout<<"Length of LCS is :"<<LCS(X,Y,X.length(),Y.length(),memo );

	return 0;
}