#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max = a[0];
        int index = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if ((i > 0 && a[i] == max && a[i] > a[i - 1]) ||
                (i < n - 1 && a[i] == max && a[i] > a[i + 1])) {
                index = i;
                break;
            }
        }
        cout << (index == -1 ? -1 : index + 1) << "\n";
    }
}