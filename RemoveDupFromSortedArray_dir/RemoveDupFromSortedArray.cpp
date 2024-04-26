#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

	vector<int> data;
	int num;
	while(cin>>num){
		data.push_back(num);
		if(cin.fail())
			break;
	}
	
	int i=0,j=0;

	while(j<data.size()){
		if(i == 0 || data[j] != data[i-1]){
			data[i++] = data[j++];
		}
		else{
			j++;
		}
	}
		
	for(int k=0;k<i;++k){
		cout << data[k]<< " ";
	}
	
	return 0;
}
