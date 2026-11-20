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
        vector <int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag;
        int x,y;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(((a[i]%a[j])%2==0)&&(a[i]!=a[j])&&(a[i]>a[j])){
                    flag=1;
                    x=j;
                    y=i;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<a[x]<<" "<<a[y]<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        flag=0;
    }}
