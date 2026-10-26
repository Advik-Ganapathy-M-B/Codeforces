#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,k;
    cin>>n>>k>>q;
    vector <int> overlaps(200002,0);
    vector <int> points(200002,0);
    for (int i=1;i<=n;i++) {
        int l, r;
        cin >> l >> r;
        overlaps[l]++;
        overlaps[r+1]--;
    }
    for (int i=1;i<=200000;i++) {
        overlaps[i]+=overlaps[i-1];
    }
    for (int i=1;i<=200000;i++) {
        points[i]=(overlaps[i]>=k)?1:0;
    }
    for (int i=1; i<=200000;i++) {
        points[i]+=points[i-1];
    }
    while (q--) {
        int a,b;
        cin>>a>>b;
        cout<<points[b]-points[a - 1]<<'\n';
    }
}

