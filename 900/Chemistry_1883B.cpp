#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    int diff;
    vector <int> count(26,0);
    for(int i=0;i<s.size();i++){
        diff=int(s[i]-'a');
        count[diff]++;
    }
    int flag=0;
    for(int i=0;i<=25;i++)
    {
        if(count[i]%2!=0){
            flag++;
        }
    }
    if(flag>k+1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}}