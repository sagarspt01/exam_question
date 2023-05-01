#include<stdio.h>
int main(){
   int n,sum=0,x;
   scanf("%d",&n);
   for(int i=1;n;i++){
     x=n%10;
     sum+=x;
     n/=10;
   }
   printf("%d\n",sum);
    return 0;
}