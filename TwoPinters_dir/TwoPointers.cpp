#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	getline(cin,str);
	int i = 0, j = str.length() - 1;
	while(i<j){
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	cout << str;
	return 0;
}
