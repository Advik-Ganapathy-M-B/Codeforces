#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y, w;
    cin>>y>>w;
    int max=w;
    if (y>w)max=y;
    int num=6-max+1;
    int denom=6;
    for (int i=1;i<=num;i++){
        if (num%i==0&&denom%i==0){
            num=num/i;
            denom=denom/i;
        }
    }
    cout<<num<<"/"<<denom;

}