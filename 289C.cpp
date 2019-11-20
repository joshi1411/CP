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
int n,m,d;
cin>>n>>m>>d;
int a[n][m];
for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		cin>>a[i][j];

int c=INT_MAX;

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
	int tc=0;
	int x=a[i][j];
	int f=1;
	for(int k=0;k<n && f==1;k++)
	{
		for(int l=0;l<m && f==1;l++)
		{
			if(a[k][l]==x)continue;
			if((a[k][l]-x)%d==0)
				tc+=abs(a[k][l]-x)/d;
			else f=0;
		}
	}
	// cout<<tc<<" f "<<f<<endl;
	if(f)c=min(c,tc);
}
if(c==INT_MAX)cout<<"-1"<<endl;
else cout<<c<<endl;

return 0;
}