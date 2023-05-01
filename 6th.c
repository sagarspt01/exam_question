#include<stdio.h>
int main(){
    int power;
    int n,mul=1;
    scanf("%d",&power);
    scanf("%d",&n);
    for(int i=1;i<=power;i++){
        mul*=n;
        //mul=mul+n;
    }
    printf("%d\n",mul);
    return 0;
}