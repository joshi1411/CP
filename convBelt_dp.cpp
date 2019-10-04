#include<bits/stdc++.h>
#define lim 100000
using namespace std;
#define ll long long int
ll a[lim],b[lim];
ll N,X,S[lim];
ll max(ll a,ll b){ return (a>b)?a:b; }
unordered_map<string,ll> memo;
ll maxProf(ll b1,ll b2,ll l)
{
	string key = to_string(b1)+to_string(b2)+to_string(l);

	if(memo.find(key) == memo.end())
	{
		if(l==0)
		{
			if(b1>N && b2<=N) return memo[key] =  b[b2]-X + maxProf(b1,b2+1,1);
			else if( b2>N && b1<=N ) memo[key] =  a[b1] + maxProf(b1+1,b2,0);
			else if (b1>N && b2>N) return  0;
			memo[key] =  max(a[b1] + maxProf(b1+1,b2+1,0) , b[b2]-X + maxProf(b1+1,b2+1,1));
		}else{
			if(b1>N && b2<=N) memo[key] =  b[b2] + maxProf(b1,b2+1,1);
			else if( b2>N && b1<=N ) memo[key] =  a[b1]-X + maxProf(b1+1,b2,0);
			else if (b1>N && b2>N) return 0;
			memo[key] = max(a[b1]-X + maxProf(b1+1,b2+1,0) , b[b2] + maxProf(b1+1,b2+1,1));
		}
	}
	return memo[key];


}

int main()
{
	ll n,x;
	cin>>n>>x;
	// ll a[n],b[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	for(ll i=0;i<n;i++)
		cin>>b[i];
	N=n-1,X=x;
	ll l=0;
	ll S1=maxProf(0,0,l=1);
	ll S2=maxProf(0,0,l=0);
	// S[0]=max()
	cout<<max(S1,S2);
	// maxProf(0,0,l);
}