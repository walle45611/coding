#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cin >> size;
    vector<vector<int>> map(size,vector<int>(size));
    int maxSum = INT_MIN;

    for (auto& row : map){
        for(auto& element : row){
            cin >> element;
        }
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){

            for(int k=i;k<size;k++){
                for(int x=j;x<size;x++){
                    int sum = 0;
                    for(int r=i;r<=k;r++){
                        for(int c=j;c<=x;c++){
                            sum += map[r][c];
                        }
                    }
                    maxSum = max(maxSum,sum);
                }
            }
        }
    }

    cout << maxSum;
    return 0;
}

