#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;

        cin>>s;
        string rev=s;
        reverse(rev.begin(),rev.end());
        int count=0;
        set<char> letters(s.begin(), s.end());
        if (letters.size() == 1) {
            cout << "NO"<<"\n";
            continue;
            }
        if(k>0&&n>1&&s==rev){cout<<"YES"<<"\n";continue;}
        if(k>0){
        for(int i=0;i<n;i++){
            if(s[i]>rev[i]){
                s[i]=rev[i];
                count++;
            }
            if (count==k){
                break;
            }
        }}
        
        if(s<rev){
                cout<<"YES"<<"\n";
            
            }
        else{
            cout<<"NO"<<"\n";
        }

        

    }
}