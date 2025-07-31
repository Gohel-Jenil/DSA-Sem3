#include <stdio.h>
void main(){
    int n,i=0,sum=0;
    float avg=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    while(i<n){
        printf("Enter the index of %d :",i);
        scanf(" %d",&arr[i]);
        sum+=arr[i];
        i++;
    }
    avg = sum/n;
    printf("Average of an array is : %f\n",avg);
}