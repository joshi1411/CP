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

int power(int x,int y)
{
	int res=1;
	while(y--)
		res*=x;
	return res;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
ll n;
cin>>n;
if(n==1000000){cout<<"1\n"<<n;
return 0;}
int a[6]={0};
vector<int> v;
for(int i=0;i<6 && n;i++)
{
	a[5-i]=n%10;
	n/=10;
}
// for(auto x:a)cout<<x<<" ";
for(int z=0;z<9;z++)
{
	ll m =0;		
	for(int i=0;i<6;i++)
	{
		if(a[i]>0){
			m+=power(10,5-i);
			a[i]--;
		}
	}
	if(m==0)break;
	v.pb(m);
}
// cout<<endl;
cout<<v.size()<<endl;
for(auto x:v)cout<<x<<" ";
return 0;
}