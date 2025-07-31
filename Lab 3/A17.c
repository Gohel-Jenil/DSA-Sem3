#include <stdio.h>
void main(){
    int n,i=0,sum=0,m;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    for(i=n;i<=m;i++){
        sum+=i;
    }
    printf("sum of an array is : %d\n",sum);
}