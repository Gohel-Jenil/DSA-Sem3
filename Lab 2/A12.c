#include <stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum++;
        }
    }
    if(sum==2){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
}
