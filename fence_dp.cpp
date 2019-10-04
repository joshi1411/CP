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

vector<pair<ll,ll>> v;



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll q;
cin>>q;
while(q--)
{
	ll n;
	cin>>n;
	for (ll i=0; i<n; i++){ 
		ll a,b;
		cin>>a>>b;
        v.push_back( make_pair(a,b) ); 
    }
    for(auto i = v.begin();i!=v.end();i++)
    	cout<<(i->F)<<" "<<(i->S)<<endl;
}

return 0;
}