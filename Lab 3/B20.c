#include <stdio.h>
void main(){
    int n,i=0,j,v=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    while(i<n){
        printf("Enter the index of %d :",i);
        scanf(" %d",&arr[i]);
        i++;
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                v++;
            }
        }
    }
    // printf("%d \n" ,v);
    if(v!=0){
        printf("Array contains duplicate elements\n");
    }
    else{
        printf("Array does not contains duplicate elements");
    }
}