#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> coins = {2,3,5,6};

    int w = 10;

    int n = coins.size();

    int dp[n+1][w+1];

    for(int i=1; i<=w ; i++)
    {
        dp[0][i] = 1000;
    }
    dp[0][0] = 0;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 0;j<=w; j++)
        {

            dp[i][j] = min(dp[i-1][j], dp[i][j - coins[i-1]] + 1);
        }
    }

    cout << "Minimum number of ways using given coins : " << dp[n][w] <<endl;

}
