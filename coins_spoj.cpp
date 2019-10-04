#include<bits/stdc++.h>

using namespace std;
#define ll unsigned long long int
map<ll,ll> memo;

int coin(ll n)
{
	if(n==0)
		return 0;
	if(memo.find(n)==memo.end())
	{ 
		ll a=n/2;
		ll b=n/3;
		ll c=n/4;
		if((a+b+c) > n)
		{
			memo[n] = coin(c) + coin(b) + coin(a);
		}
		else memo[n]=n;
	}
	return memo[n];
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll n;
	while(cin>>n)
	{
		coin(n);
		ll ans = memo[n];
		cout<<ans<<endl;
		// for(auto i = memo.begin();i!=memo.end();i++)
		// 	cout<<i->first<<" "<<i->second<<endl;
		// cout<<endl;
	}
	return 0;
}
