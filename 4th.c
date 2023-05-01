#include<stdio.h>
int main(){
   int n,count=0;
   scanf("%d",&n);
   for(int i=1;n>0;i++){
     count++;
     n/=10;
   }
   printf("%d\n",count);
    return 0;
}