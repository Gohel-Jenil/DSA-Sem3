#include <stdio.h>

int fact(int n){
    int total=1;
    for(int i=1;i<=n;i++){
        total*=i;
    }
    return total;
}
int nCr(int i,int j){
    return fact(i)/(fact(j)*fact(i-j));
}
void main(){
    int n;
    printf("Enter a N : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf("   ");

        }
        for(int j=0;j<=i;j++){
            printf("    %d ",nCr(i,j));
        }
        printf("\n");
    }
}