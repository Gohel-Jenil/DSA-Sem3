#include <stdio.h>
#include <math.h>
int lenght(int n){
    int sum=0;
    while(n!=0){
        sum++;
        n/=10;
    }
    printf("%d \n",sum);
    return sum;
}
void main(){
    int total=0,sum=0,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int main=n;
    int len = lenght(n);
    printf("%d \n",n);
    while(n!=0){
        int tem=n%10;
        printf("%d ^ %d = %d \n",tem,len,(int)pow(tem,len));
        total = total + (int)pow(tem,len);
        printf("toal : %d \n",total);
        n/=10;
    }
    printf("%d \n",total);
    if(main==total){
        printf("The number is a Armstrong");
    }
    else{
        printf("The number is not a Armstrong");
    }
}