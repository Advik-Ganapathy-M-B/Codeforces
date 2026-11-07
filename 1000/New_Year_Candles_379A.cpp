#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    int leftovers=0;
    for(int i=a;i>=1;i--){
        ans++;
        leftovers++;
        if(leftovers==b){
            i++;
            leftovers=0;
        }
    }
    cout<<ans<<"\n";
}
