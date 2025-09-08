#include <stdio.h>

void main(){
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Element At Index %d: ",i);
        scanf("%d",&arr[i]);
    }
    int find,flag=0;
    printf("Enter the value that you want to find :\n");
    scanf("%d",&find);
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==find)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("Find value \n");
    }
    else{
        
        printf("Not Find value \n");
    }
}