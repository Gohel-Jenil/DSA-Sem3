#include<stdio.h>
void main(){
char n;
printf("Enter a n");
scanf("%d",&n);
if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
    printf("n is vowel");
}
else{
    printf("n is not vowel");
}
}