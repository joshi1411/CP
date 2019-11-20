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
int n,k;
cin>>n>>k;
int a[n];
int dp[n]={0},c=0;
// dp[0]=a[0];
for(int i=0;i<n;i++){
	cin>>a[i];
	dp[i]=a[i];
}
int rem=(k<a[0])?(a[0]-k):0;

for(int i=1;i<n;i++)
{
	int rem=(k<a[i])?(k - dp[i-1]):0;
	if(a[i]+dp[i-1]+rem <k)
	{
		c+=k-(dp[i-1]+a[i]);
		dp[i]=(k-dp[i-1]-rem);
	}
}
cout<<c<<endl;
for(int i=0;i<n;i++)cout<<dp[i]<<" ";
return 0;
}