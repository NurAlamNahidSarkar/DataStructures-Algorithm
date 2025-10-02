#include <iostream>

using namespace std;

int isFibonacci(int n) {
    int dp[10000]; 
    dp[0] = 0;
    dp[1] = 1;
    
    for (int i = 2; dp[i - 1] + dp[i - 2] <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        if (dp[i] == n) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int n = 1791;
    
    if (isFibonacci(n))
        cout << n << " is a Fibonacci number." << endl;
    else
        cout << n << " is NOT a Fibonacci number." << endl;
    
    return 0;
}