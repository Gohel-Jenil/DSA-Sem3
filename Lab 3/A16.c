#include <stdio.h>
void main(){
    int n,i=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    while(i<n){
        printf("Enter the index of %d :",i);
        scanf(" %d",&arr[i]);
        i++;
    }
    i=0;
    while(i<n){
        printf("value of index of %d : %d\n",i,arr[i]);
        i++;
    }    
}