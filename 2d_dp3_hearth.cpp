/******************************************
* AUTHOR : Ashish Joshi* 
* INSTITUTION : NIT Hamirpur *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
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

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);
int n,m,p;
cin>>n>>m>>p;
int a[n+1][m+1]={0};
int obs[p+1][2];

for(int i=1;i<=p;i++)
{
	cin>>obs[i][0];
	cin>>obs[i][1];

	a[obs[i][0]][obs[i][1]]=-1;
}

// for(int i = )
int s[n+1][m+1]={0};


if(a[1][1]==-1)
	cout<<"Cant reach!\n";
else{
	for(int i=1;i<n+1;i++) 
		if(a[i][0]==-1) break;
		else a[i][0]=1;

	for(int i=1;i<m+1;i++) 
		if(a[0][i]==-1) break;
		else a[0][i]=1;

	for(int i=2;i<n+1;i++){
		for(int j=2;j<m+1;j++){
			
			if(a[i][j]==-1) continue;

			if(a[i-1][j]>0)
				a[i][j] += a[i-1][j];
			if(a[i][j-1]>0)
				a[i][j] += a[i][j-1];
			}
		}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;

	}
}
return 0;
}