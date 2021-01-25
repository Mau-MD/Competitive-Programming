
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 25;
const int MAXN = 10000;
int n , sum , v[N];
int dp[N][MAXN];

void solve(){
    memset(dp , 0 , sizeof(dp));
    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = sum ; j >= 0 ; j--){
            dp[i][j] = dp[i-1][j];//Note that you have to assign values ​​here.
            if(j >= v[i])
               dp[i][j] = max(dp[i][j] , dp[i-1][j-v[i]]+v[i]);
        }
    }
    int i = n , j = sum;
    while(i&&n){
        if(dp[i-1][j] != dp[i][j]){
            printf("%d " , v[i]);
            j -= v[i];
        }
        i--;
    }
    printf("sum:%d\n" , dp[n][sum]);
}

int main(){
    while(scanf("%d" , &sum) != EOF){
         scanf("%d" , &n);
         for(int i = 1 ; i <= n ; i++)
             scanf("%d" , &v[i]);
         solve();
    }
    return 0;
}
