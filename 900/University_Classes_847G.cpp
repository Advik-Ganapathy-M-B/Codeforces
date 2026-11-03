#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector <string> c(n,"");
    for(int i=0;i<c.size();i++){
        cin>>c[i];
    }

    int count=0;
    int max=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<n;j++){
            if(c[j][i]=='1'){
                count++;
            }
        }
        if(count>max){
            max=count;
        }
        count=0;
    }
    std::cout<<max;
}