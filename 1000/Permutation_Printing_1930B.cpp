#include <bits/stdc++.h>
using namespace std;
void updown() {
    int n;
    cin>>n;
    int low=1;
    int high=n;
    
    for (int i=1;i<=n;i++) {
        if (i%2==1) {
            cout<<low<<" ";
            low++;
        } else {
            cout<<high<<" ";
            high--;
        }
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        updown();
    }
}
