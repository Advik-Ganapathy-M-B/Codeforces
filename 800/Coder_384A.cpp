#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,coders;
    cin>>n;
    if (n%2==0){
        coders=n*n/2;
        cout<<coders<<"\n";
        for(int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if((i+j)%2==0){
                    cout<<"C";
                }
                else{
                    cout<<".";
                }
            }
        cout<<"\n";
    }}
    else{
        coders=(n*n+1)/2;
        cout<<coders<<"\n";
        for(int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if((i+j)%2==0){
                    cout<<"C";
                }
                else{
                    cout<<".";
                }
            }
        cout<<"\n";
    }}

    }
