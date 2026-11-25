#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string p,s;
        cin>>p>>s;
        int readcount=0;
        int writecount=0;
        int flag=0;
        for(int i=0;i<p.size();){
            readcount=i;
            if(writecount>=s.size()||p[readcount]!=s[writecount]){
                flag=1;
                break;
            }
            char c=p[readcount];
            int a=0,b=0;
            while(readcount<p.size() && p[readcount]==c){
                readcount++;
                a++;
            }
            while(writecount<s.size() && s[writecount]==c){
                writecount++;
                b++;
            }
            if(b<a||b>2*a){
                flag=1;
                break;
            }
            i=readcount;
        }
        if(flag==1||writecount!=s.size()){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
