#include <bits/stdc++.h>

using namespace std;

int main(){
	string word1,word2,merged;
	cin >> word1 >> word2;
	int i = 0,j=0;
	while (i < word1.length() && j < word2.length()) {
		merged += word1[i++];
		merged += word2[j++];
	}
	while (i < word1.length()) {
		merged += word1[i++];
	}
	while (j < word2.length()) {
		merged += word2[j++];
	}
	cout << merged;
	return 0;
}
