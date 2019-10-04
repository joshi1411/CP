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

vector<ll> v;
string s;
ll wow()
{
	ll w1 = 0,wo = 0, w2 = 0;
	ll n = s.size();
	// ll start = n-i;
	for(ll i=0;i<n-1;i++)
	{
		if(s[i]=='v' && s[i+1]=='v') w1++;
		else if(s[i]=='o') 
				wo=wo+w1;
		v.push_back(wo)
;	}
	// for(auto i = v.begin();i!=v.end();i++)
	// 	cout<<*i<<" ";
	// cout<<endl;
	for(ll i=0;i<n-1;i++)
		if(s[i]=='v' && s[i+1]=='v')
		{
			w2+=v[i];
			// cout<<w2<<" ";
		}
		// cout<<endl;

return w2;
}


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

// string s;
getline(cin,s);
cout<<wow()<<endl;

return 0;
}