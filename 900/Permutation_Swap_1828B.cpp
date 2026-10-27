#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector <int> b(n,0);
        for(int i=0;i<n;i++){
            b[i]=abs(a[i]-(i+1));
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=gcd(ans,b[i]);
            }
        cout<<ans<<"\n";
        }
    }