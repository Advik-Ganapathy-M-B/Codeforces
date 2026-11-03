#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n;
    long long sum=0;
    while(t--){
        cin>>n;
        if(n==1){cout<<0<<"\n";}
        else{
        for(long long i=n;(i-2)>=1;i-=2){
            sum+=((i-1)/2)*(i*i-((i-2)*(i-2)));
        }
        cout<<sum<<"\n";
    }
    sum=0;
}
}
