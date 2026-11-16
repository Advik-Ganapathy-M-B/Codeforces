#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s;
    getline(cin,s);
    if(s.size()==1){
        cout<<s;
    }
    else{
    int surname=0;
    while(surname<s.size()){
        if(s[surname]==' '){
            break;
        }
        surname++;
    }
    surname++;
    if(surname==s.size()+1){
        cout<<s;
    }
    else{
    int firstname=1;
    string ans;
    ans=*(s.begin());
    int flag=0;
    while(firstname<surname-1){
        if(s[firstname]>=s[surname]){
            ans+=s[surname];
            flag=1;
            break;
        }
        else{
            ans+=s[firstname];
            firstname++;
        }
    }
    if (flag==0){
        ans+=s[surname];
    }
    cout<<ans;
}}}
