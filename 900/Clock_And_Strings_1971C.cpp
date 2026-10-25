#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int bflag=0;int rflag=0;
        vector <int> blue={a,b};
        vector <int> red={c,d};
        int count=0;
        vector <int> clock(4,0);
        for(int i=1;i<=12;i++){
            if(blue[0]==red[0]||blue[0]==red[1]||blue[1]==red[0]||blue[1]==red[1]){
                break;
            }
            if((i==blue[0]||i==blue[1])){
                clock[count]=1;
                count++;
            }
            else if(i==red[0]||i==red[1]){
                clock[count]=0;
                count++;
            }
            if (count==4){
                break;
            }           
        }
        if(clock[0]==clock[1]||clock[1]==clock[2]||clock[2]==clock[3]||clock[3]==clock[0]){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }

    }
}
