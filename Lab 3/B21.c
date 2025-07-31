#include <stdio.h>
void main(){
    int n,i=0,v=0,c=0;
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
        printf(" %d, ",arr[i]);
        i++;
    }  
    printf("\nEnter the value of an array: ");
    scanf("%d", &v);
    printf("Enter the second value of an array: ");
    scanf("%d", &c);
    printf("before v:%d\n",v);
    for(i=0;i<n;i++){
        if(v==arr[i]){
            arr[i]=c;
            printf("index is %d\n",i);
            break;
        }
    }
    i=0;
    while(i<n){
        printf("value of index of %d : %d\n",i,arr[i]);
        i++;
    } 
    
}