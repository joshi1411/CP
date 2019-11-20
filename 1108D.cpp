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
int n;
cin>>n;
char s[n];
char res[n];int c=0;
for(int i=0;i<n;i++){
	cin>>s[i];
}
int suf[n];
// memset(suf,0,sizeof(suf));
for(int i=0;i<n;i++){
	suf[i]=1;
	res[i]=s[i];
}
for(int i=n-2;i>=0;i--)
{
	if(s[i]==s[i+1])
		suf[i]=suf[i+1]+1;
}
// for(int i=0;i<n;i++)
// cout<<suf[i]<<" ";
// cout<<endl;
for(int i=0;i<n;i++)
{
	char st=s[i], en='*',fill='*';

	if(suf[i]!=1){
		if(i+suf[i]<n)
		{
			en=s[i+suf[i]];
		}
		if((st=='R' && en=='G') || (st=='G' && en=='R') || (st=='R' && en=='*'))fill='B';
		if((st=='B' && en=='G') || (st=='G' && en=='B') || (st=='G' && en=='*'))fill='R';
		if((st=='R' && en=='B') || (st=='B' && en=='R') || (st=='B' && en=='*'))fill='G';
		// cout<<endl<<fill<<" st: "<<st<<" en: "<<en<<endl;
		for(int j=i+1;j<(i+suf[i]) && j<n;j+=2)
		{
			c++;
			res[j]=fill;
		}
		
		i+=(suf[i]-1);
	}

}
cout<<c<<endl;
// cout<<res<<endl;
for(int i=0;i<n;i++)cout<<res[i];
return 0;
}