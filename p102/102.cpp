#include<iostream>

using namespace std;

int main(){
	const string asn[] = {
		"BCG","BGC","CBG","CGB","GBC","GCB"
	};
	int move[6] = {0};
	int b[3],g[3],c[3];
	int miniIndex = 0;
	while(cin>>b[0]){
		cin >> g[0] >> c[0] >> b[1] >> g[1] >> c[1] >> b[2] >> g[2] >> c[2]; 
		
		move[0] = b[1] + b[2] + c[0] + c[2] + g[0] + g[1];
		move[1] = b[1] + b[2] + g[0] + g[2] + c[0] + c[1];
		move[2] = c[1] + c[2] + b[0] + b[2] + g[0] + g[1];
		move[3] = c[1] + c[2] + g[0] + g[2] + b[0] + b[1];
		move[4] = g[1] + g[2] + b[0] + b[2] + c[0] + c[1];
		move[5] = g[1] + g[2] + c[0] + c[2] + b[0] + b[1];

		for(int i=0;i<6;++i){
			if (move[miniIndex] > move[i]){
				miniIndex = i;
			}
		}

		cout << asn[miniIndex] << " " << move[miniIndex] << endl;

		miniIndex = 0;
	}
	return 0;
}
