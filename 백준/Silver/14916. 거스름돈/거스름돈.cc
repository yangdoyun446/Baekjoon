#include <iostream>
#include <vector>
using namespace std;
const int INF = 1000000000;
int main(void){
    int a;
    cin >> a;
    vector<int> dp;
    dp.push_back(0); // 0
    dp.push_back(INF); // 1
    dp.push_back(1); // 2
    dp.push_back(INF); // 3
    dp.push_back(2); // 4
    dp.push_back(1); // 5
    dp.push_back(3); // 6
    for (int i = 6; i <= a; i++){
        dp.push_back(INF);
        if(dp[i-2]!=INF) dp[i]=min(dp[i],dp[i-2]+1);
        if(dp[i-5]!=INF) dp[i]=min(dp[i],dp[i-5]+1);
    }
    if(dp[a] == INF){
        cout << -1 << endl;
    }else{
        cout << dp[a] << endl;
    }
    
}