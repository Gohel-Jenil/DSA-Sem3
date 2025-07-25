#include <stdio.h>
void main(){
    int n,m;
    int sum=1;
    printf("Enter the start number : ");
    scanf("%d",&n);
    printf("Enter the end number : ");
    scanf("%d",&m);
    for(int i=(n+1);i<m;i++){
        printf("%d ,",i);
    }
}
