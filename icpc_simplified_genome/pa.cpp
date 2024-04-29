#include<bits/stdc++.h>

using namespace std;

int main(){
	map<char,vector<string>> rna;
	rna['F'] = { "UUU","UUC" };
	rna['L'] = { "UUA","UUG","CUU","CUC","CUA","CUG" };
	rna['I'] = {"AUU","AUC","AUA"};
	rna['M'] = {"AUG"};
	rna['V'] = {"GUU","GUC","GUA","GUG"};
	rna['S'] = {"UCU","UCC","UCA","UCG","AGU","AGC"};
	rna['P'] = {"CCU","CCC","CCA","CCG"};
	rna['T'] = {"ACU","ACC","ACA","ACG"};
	rna['A'] = {"GCU","GCC","GCA","GCG" };
	rna['Y'] = {"UAU","UAC"};
	rna['H'] = {"CAU","CAC"};
	rna['Q'] = {"CAA","CAG"};
	rna['N'] = {"AAU","AAC"};
	rna['K'] = {"AAA","AAG"};
	rna['D'] = {"GAU","GAC"};
	rna['E'] = {"GAA","GAG"};
	rna['C'] = {"UGU","UGC"};
	rna['W'] = {"UGG"};
	rna['R'] = {"CGU","CGC","CGA","CGG","AGA","AGG"};
	rna['G'] = {"GGU","GGC","GGA","GGG"};
	rna['Z']=  {"UAA","UAG","UGA"};
	

	int n;
	cin>> n;

	for(int run=0 ; run<n ; ++run){
		string r;
		cin >> r;
		vector<char> ans;
		for(string::size_type i=0;i<r.size();i+=3){
			string tmp = r.substr(i,3);
			char key = ' ';
			for(const auto& pair:rna){
				if(find(pair.second.begin(), pair.second.end(), tmp) != pair.second.end()){
					key = pair.first;
				}
			}
			if (key == 'Z')
				break;
			ans.push_back(key);
		}	
		for(char c: ans)
			cout << c;
		cout<<endl;
	}
		return 0;
}
