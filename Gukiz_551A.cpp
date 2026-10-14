#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    
    int count=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[2000];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[j]>a[i]){
                count++;
            }
        }
        b[i]=1+count;
        count=0;
    }
    for (int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
