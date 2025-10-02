#include <bits/stdc++.h>
using namespace std;

void optimalParenthesization(vector<vector<int>> &s, int i, int j) {
    if (i == j) {
        cout << "A" << i;
        return;
    }
    cout << "(";
    optimalParenthesization(s, i, s[i][j]); 
    optimalParenthesization(s, s[i][j] + 1, j);  
    cout << ")";
}


int matrixMultiplication(vector<int> &arr) {
    int n = arr.size() - 1; 

    vector<vector<int>> m(n, vector<int>(n, 0)), s(n, vector<int>(n, 0));
    
    for (int l = 2; l <= n; ++l) 
    {  
        for (int i = 0; i < n - l + 1; ++i) 
        {
            int j = i + l - 1;  
            m[i][j] = INT_MAX;  

            for (int k = i; k < j; ++k) 
            {  
                int q = m[i][k] + m[k + 1][j] + arr[i] * arr[k + 1] * arr[j + 1];
                if (q < m[i][j]) 
                {  
                    m[i][j] = q;
                    s[i][j] = k;  
                }
            }
        }
    }
    
    cout << "m[i,j] Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) 
            {
                cout << m[i][j] << " ";
            } 
            else 
            {
                cout << "\t";  
            }
        }
        cout << "   " << endl;
    }

    cout << "s[i,j] Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i < j)
            {
                cout << s[i][j] << "\t";
            } 
            else
            {
                cout << "\t";  
            }
        }
        cout << endl;
    }

    cout << "Optimal Parenthesization: ";
    optimalParenthesization(s, 0, n - 1);
    cout << endl;

    return m[0][n - 1];
}

int main() {
    vector<int> arr = {10, 20, 5, 40, 7, 60, 15, 35};
    matrixMultiplication(arr);
    return 0;
}
