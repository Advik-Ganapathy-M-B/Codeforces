#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int>a(n,0);
        vector <int>b(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            }
        int count1=0;
        int count2=0;
        int need=0;
        for(int i=0;i<n;i++){
            if(b[i]>a[i]){
                count2++;
                need=b[i]-a[i];
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]-b[i]<need){
                count1++;
            }
        }
    if(count2<=1 && count1<=1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}}
