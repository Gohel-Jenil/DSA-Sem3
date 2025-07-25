#include <stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n%10!=0){
        int tem=n%10;
        sum= sum*10+tem;
        n/=10;
    }
    printf("%d ",sum);
}
