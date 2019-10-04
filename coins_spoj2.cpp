#include <iostream>
using namespace std;

long long int ret(long long int a,long long int* ar){
    if(a<=1)
    return a;
	if(ar[a]!=0)
	return ar[a];
	else
	return ar[a]=max(a,ret(a/2,ar)+ret(a/3,ar)+ret(a/4,ar));

}
int main() {
      long long int n;
	while(cin>>n){
	   long long int* ar=new long long int[n+1]; 
	  long long	int m;
		m=ret(n,ar);
		cout<<m<<endl;
	}
	return 0;
}