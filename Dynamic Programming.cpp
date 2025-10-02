#include <iostream>
#include <vector>

using namespace std;

int findF(int n) {
    if (n < 0) return -1;  

    vector<int> dp(n + 1, 0); 

    
    dp[0] = 8;
    dp[1] = 9;
    dp[2] = 10;

    
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 3] + dp[i - 1]; 
    }

    return dp[n]; 
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "f(" << n << ") = " << findF(n) << endl;

    return 0;
}