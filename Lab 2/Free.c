#include<stdio.h>
void main(){
    int n,rem;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        printf("%d",rem);
        n/10;
    }


}