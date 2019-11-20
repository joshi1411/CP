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
int t;
cin>>t;
while(t--)
{
	ll a,b;
	cin>>a>>b;
	ll sum=abs(b-a);
	ll c=sum/5;
	sum=sum-c*5;
	ll d=sum/2;
	sum-=d*2;
	cout<<c+d+sum<<endl;
}

return 0;
}