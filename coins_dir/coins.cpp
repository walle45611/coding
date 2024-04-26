#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void coins(vector<int> &dp, vector<int> &last_coin, int n){
    vector<int> amount = {1, 5, 10, 25};

    dp[0] = 0;

    for(int i = 1; i <= n; ++i){
        for(int j = 0; j < 4; ++j){
            if (amount[j]<=i){
                dp[i] = min(dp[i],dp[i - amount[j]] + 1);
                last_coin[i] = amount[j]; 
		cout<<dp[i-amount[j]]+1<<" ";
            }
        }
    }
}

int main(){
    int n ;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    vector<int> last_coin(n + 1, -1); 

    coins(dp, last_coin, n);

    cout << "湊出金額 " << n << " 所需要的最少硬幣數量為：" << dp[n] << endl;
    cout << "所使用的硬幣面值為：";

    while (n > 0){
        cout << last_coin[n] << " ";
        n -= last_coin[n];
    }
    cout << endl;

    return 0;
}

