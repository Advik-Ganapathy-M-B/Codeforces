#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        int up=1;
        while(k!=0 && up<n){
            int diff=a[up-1]-a[up];
            int inc=min(k,diff);
            a[up]+=inc;
            k-=inc;
            up+=2;
        }
        long long sumA=0;
        long long sumB=0;
        for(int i=0;i<n;i+=2){
            sumA+=a[i];
            if(i+1<n){
                sumB+=a[i+1];
            }
        }
        cout<<(sumA-sumB)<<"\n";
    }
}
