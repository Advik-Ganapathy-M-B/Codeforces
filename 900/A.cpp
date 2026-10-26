#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    const long long mod = 1000000007;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> sums(n, 0);
        long long power = 1;
        long long final = 0;
        for (int i = 0; i < n; i++) {
            sums[i] = (10LL * power) % mod;
            power = (power * 16) % mod;
        }
        for (int i = 0; i < n; i++) {
            final = (final + sums[i]) % mod;
        }
        cout << final << "\n";
    }
}
