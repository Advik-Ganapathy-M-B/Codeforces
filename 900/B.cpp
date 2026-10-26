#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q,k;
    cin>>n>>k>>q;
    vector <int> points(200000,0);
    vector <int> overlaps(200000,0);
    for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        for(int j=l;j<=r;j++){
            overlaps[j]++;
        }
    }
    
    for(int s=1;s<=q;s++){
    int a,b;
    cin>>a>>b;
    int finalcount=0;
    for(int p=a;p<=b;p++){
        if(overlaps[p])
        if(overlaps[p]>=k){
            finalcount++;
        }

    }
    cout<<finalcount<<"\n";
}}

