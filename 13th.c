#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=(4-i);j++){//n+1-i
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}