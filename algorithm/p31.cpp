#include<iostream>

using namespace std;

int main(){	
	int n;
	cin >> n;

	for(int i=2;i<=n;++i){
		for(int j=0;j<=n;){
			cout << i << " " << j << endl;
			j += n/4;
		}
	}
	return 0;
}
