#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        vector <int> b(n,0);
        for (int j=0;j<n;j++){
            cin>>b[j];
        }
        set<int> s(b.begin(), b.end());
        cout << s.size() << '\n';
    }
}