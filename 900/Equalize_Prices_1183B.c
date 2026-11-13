#include <stdio.h>
int maxima(int a[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;

}
int minima(int a[],int n){
    int min=1000000000;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;

}
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if(maxima(a,n)-k<=minima(a,n)+k){
            printf("%d \n",minima(a,n)+k);
        }
        else{
            printf("-1 \n");
        }
}
}
