#include <stdio.h>
#define min(a, b) a < b ? a : b
int main(void){
    int n;
    int dp[10000005];
    scanf("%d",&n);
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + 1;
        if(i % 2 == 0){
            dp[i] = min(dp[i/2] + 1, dp[i]);
        }
        if(i % 3 == 0){
            dp[i] = min(dp[i/3] + 1, dp[i]);
        }
    }
    printf("%d",dp[n]);
}