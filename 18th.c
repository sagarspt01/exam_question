#include<stdio.h>
int main(){
    
    int n,largest_1=0,largest_2,num,i;
    printf("n");//no. of element
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("num");
    scanf("%d",&num);
    if(num>largest_1){
        largest_2=largest_1;
        largest_1=num;
    }
    
    }
    printf("largest 1 %d\n",largest_1);
     printf("largest 2 %d\n",largest_2);

    return 0;
}