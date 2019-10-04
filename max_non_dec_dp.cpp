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
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second


ll lis(ll a[],ll n)
{
	ll lis[n];
	lis[0]=1;
	// ll mx=1;
	for(ll i=1;i<n;i++)
	{
		lis[i]=1;
		for(ll j=0;j<i;j++)
			if(a[i]>=a[j] && lis[i] < lis[j]+1)
				lis[i]=lis[j]+1;
		// mx = max(mx,lis[i]);
	}
	return *max_element(lis,lis+n);

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
	cin>>a[i];

cout<<lis(a,n)<<"\n";


return 0;
}