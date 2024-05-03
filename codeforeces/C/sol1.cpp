#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define lf double
#define ld long double
using namespace std;
ll t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		ll s=0,k=n*2-1;
		for(int i=1;i<=n;i++){
			s+=i*(i*i-(i-1)*(i-1));
		}
		cout<<s<<' '<<k<<endl;
		for(int i=1;i<=k;i++){
			if(i%2){
				cout<<2<<' '<<i/2+1;
				for(int j=n;j>=1;j--)cout<<' '<<j;
				cout<<endl;
			}
			else{
				cout<<1<<' '<<i/2+1;
				for(int j=n;j>=1;j--)cout<<' '<<j;
				cout<<endl;
			}
		}
	}
	return 0;
}

