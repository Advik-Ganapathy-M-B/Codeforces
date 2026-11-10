#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char str[105];
        scanf("%s",str);
        if(strlen(str)<=10){
            printf("%s\n",str);
        }
        else{
        printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);}
    }
}
