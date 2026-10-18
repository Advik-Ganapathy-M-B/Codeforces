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
        set b=set(a.begin(),a.end());
        int length=b.size();
        int ans=0;
        vector <int> c(length,0);
        for(int j=1;j<=n;j++){
            if(j<=length){
                ans=length;
            }
            else if(j>length){
                ans=length+ (j-length);
            }
            cout<<ans<<" ";
        }
        cout<<"\n";


        

    }
}