#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long ans=1000000000000;
    for (int d=1;d<= 9;d++) {
        long long p=1;
        while (d*p<=n) {
            p*=10;
        }
        ans = min(ans, (long long)d*p);
    }
    cout<<ans-n<<'\n';
}
