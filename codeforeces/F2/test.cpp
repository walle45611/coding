#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findDifferentElements(vector<int>& vec1, vector<int>& vec2, int caseNumber) {
    vector<int> difference;
    for (int i:vec2){
	if(find(vec1.begin(),vec1.end(),i) == vec1.end()){
		cout << i << " ";
	}
    }


    for (int i:vec1){
	if(find(vec2.begin(),vec2.end(),i) == vec2.end()){
		cout << i << " ";
	}
    }
    cout << endl;
}

int main() {
    vector<int> case1_vec1 = {4, 2, 5};
    vector<int> case1_vec2 = {3, 2, 4};

    vector<int> case2_vec1 = {3};
    vector<int> case2_vec2 = {3, 5, 2, 4};

    findDifferentElements(case1_vec1, case1_vec2, 1);
    findDifferentElements(case2_vec1, case2_vec2, 2);

    return 0;
}

