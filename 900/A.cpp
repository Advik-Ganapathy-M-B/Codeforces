#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        int n=0;
        long long deci=0;
        long long divider=0;
        divider=(long long int)((pow(10,9))+7);
        cin>>n;
        vector<long long> sums(n,0);
        for(int i=0;i<n;i++){
            sums[i]=((long long)(10*pow(16,i))%divider);
        }
        long long final;
        for(int i=0;i<n;i++){
            sums[i]=((sums[i])%divider);
            final+=sums[i];
        }
        cout<<final<<"\n";
    }
}