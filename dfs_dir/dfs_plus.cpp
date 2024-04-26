#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


vector<vector<int>> map;
int dirRow[] = {-1,0,1,0};
int dirCol[] = {0,1,0,-1};

vector<vector<int>> readMap(const string& filename) {
	vector<vector<int>> map;
	ifstream file(filename);
	if (!file) {
		exit(1);
	}

	string line;
	while(getline(file,line)){
		vector<int> row;
		for (char c: line){
			row.push_back(c - '0');
		}
		map.push_back(row);
	}
	file.close();
	return map;
}

bool search(int row,int col){
	if(map[row][col] == 9){
		return true;
	}

	map[row][col]=2;

	for(int i=0;i<4;++i){
		int nextRow = row + dirRow[i];
		int nextCol = col + dirCol[i];

		if (nextRow < 0 || nextRow >= map.size() || nextCol < 0 || nextCol >= map.size() || map[nextRow][nextCol] == 1 || map[nextRow][nextCol] == 2){
			continue;
		}

		if(search(nextRow,nextCol))
			return true;
	}
	return false;
}

int main(){
	string filename = "map.txt";
	map = readMap(filename);
	if(search(0,0)){
		cout << "find" << endl;
	}	
	else{
		cout << "not find" << endl;
	}

	return 0;
}
