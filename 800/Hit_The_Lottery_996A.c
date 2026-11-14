#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int bills=0;
    int denominations[5]={100,20,10,5,1};
    for (int i=0;i<5;i++) {
        bills+=n/denominations[i];
        n%=denominations[i];
    }

    printf("%d\n",bills);
    return 0;
}
