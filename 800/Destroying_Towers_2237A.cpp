#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int minheight=1000;
    int n,height,sum;
    for(int q=1;q<=t;q++){
        cin>>n;
        height;sum=0;
        minheight=1000;
        for (int i=0;i<n;i++){
       
        cin>>height;
        sum+=min(height,minheight);
        minheight=min(height,minheight);
        }
        cout<<sum<<"\n";

    }
}

