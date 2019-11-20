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

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int n;
cin>>n;
ll h1[n],h2[n],dp[n][2]={0};
for(int i=0;i<n;i++)cin>>h1[i];
for(int i=0;i<n;i++)cin>>h2[i];
dp[0][0]=h1[0];
dp[0][1]=h2[0];
for(int i=1;i<n;i++)
{
	dp[i][0] = max(dp[i-1][0],dp[i-1][1]+h1[i]);
	dp[i][1] = max(dp[i-1][1],dp[i-1][0]+h2[i]);
}
// for(int i=0;i<n;i++)
// 	cout<<dp[i][0]<<" ";
// cout<<endl;
// for(int i=0;i<n;i++)
// 	cout<<dp[i][1]<<" ";
cout<<max(dp[n-1][0],dp[n-1][1]);
return 0;
}