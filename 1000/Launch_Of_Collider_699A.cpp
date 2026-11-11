#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <pair<char,int>> a(n);
    
    for(int i = 0;i < n;i++){
        cin>>a[i].first;
    } 
    
    for(int i = 0;i < n;i++){
        cin>>a[i].second;
    } 
    int mindiff = 2000000000;
    for(int i = 0;i < n-1;i++){
        if(a[i].first == 'R' &&a[i+1].first == 'L'){
            if(abs(a[i].second-a[i + 1].second)<mindiff){
            mindiff = abs(a[i].second-a[i + 1].second);
            }
        }
    }
    int ans=mindiff/2;
    if(ans==1000000000){cout<<-1;}
    else{
    cout<<ans;
}}