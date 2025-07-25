#include <stdio.h>
void main(){
    int n,m;
    int sum=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        sum = sum * n ;
    }
    printf("answer is : %d",sum);
}
