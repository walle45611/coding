#include<iostream>
#include<vector>

using namespace std;

int main(){
    int num = 100;
    vector<bool> isPr(num,false);

    for(int i=2; i*i<num ;++i){
        if(isPr[i] == false){
            for(int j=i*i;j<num;j+=i){
                isPr[j] = true;
            }
        }
    }

    for(int i=2;i<num;++i){
        if(isPr[i] == false){
            cout << i << " ";
        }
    }

    return 0;
}

