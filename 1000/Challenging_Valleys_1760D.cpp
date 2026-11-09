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
        vector<int> a(n);
        for (int i = 0; i<n; i++) {
            cin >> a[i];
        }
        int valleys = 0;
        int l = 0;
        while (l < n) {
            int r = l;
            while (r+1<n && a[r+1]==a[l]) {
                r++;
            }
            bool left_ok = (l==0 || a[l-1]>a[l]);
            bool right_ok = (r==n-1 || a[r]<a[r+1]);
            if (left_ok && right_ok) {
                valleys++;
            }
            l = r+1;
        }
        if (valleys==1) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }}
