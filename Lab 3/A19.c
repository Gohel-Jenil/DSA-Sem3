#include <stdio.h>
void main(){
    int n,i=0,sm,lg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    while(i<n){
        printf("Enter the index of %d :",i);
        scanf(" %d",&arr[i]);
        i++;
    }
    if(n!=0){
        lg=arr[0];
        sm=arr[0];
    }
    i=0;
    while(i<n){
        if(lg<arr[i]){
            lg=arr[i];
        }
        if(sm>arr[i]){
            sm=arr[i];
        }
        i++;
    }
    printf("smallest number is :%d\n",sm);
    printf("largest value is :%d\n",lg);
}