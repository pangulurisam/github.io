#include<bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int n, int m, vector<vector<int>>& dp) {
    if (n == 0 || m == 0)
        return 0;
    if (a[n - 1] == b[m - 1])
        return dp[n][m] = 1 + lcs(a, b, n - 1, m - 1, dp);
    if (dp[n][m] != -1)
        return dp[n][m];
    return dp[n][m] = max(lcs(a, b, n, m - 1, dp), lcs(a, b, n - 1, m, dp));
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        int n = a.length();
        int m = b.length();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        int lcsl = lcs(a, b, n, m, dp);
        cout << lcsl << "\n";
    }
    return 0;
}
