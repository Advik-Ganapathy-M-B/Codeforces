#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector <int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    int carcount=0;
    int waiting=0;
    int freeseats=0;
    for(int i=0;i<n;i++){
        if(a[i]==4){
            carcount++;
        }
        else if(a[i]==3){
            carcount++;
            freeseats++;
        }
        else if(a[i]==1&&freeseats>0){
            freeseats--;
        }
        else{
            waiting+=a[i];
        }
        if(waiting==4){
            carcount++;
            waiting=0;
        }
        if(waiting>4){
            carcount++;
            waiting=a[i];
        }
    }
    if(waiting!=0){
        carcount++;
    }
    cout<<carcount;
}
