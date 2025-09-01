#include <stdio.h>
int f=-1,r=-1;
struct node {
    int val;
    int pr;
};
struct node arr[100];

void enqueue(int val ,int pr){
    if(r>=100){
        printf("Queue OverFlow \n");
    }
    arr[++r].val=val;
    arr[r].pr=pr;
    if (f==-1)
    {
        f++;
    }
}

void dqueue(){
    int maxprio=0;
    if (r==-1)
    {
        printf("Queue Underflow \n");
    }
    
    for (int i = f; i <= r; i++)
    {
        if (arr[i].pr > arr[maxprio].pr)
        {
            maxprio=i;
        }
        
    }
    for (int i = maxprio; i <= r; i++)
    {
        arr[i]=arr[i+1];
    }
    
    if (r==f)
    {
        f=-1;
    }
    r--;
    
}

void display(){
    for (int i = f; i <= r; i++)
    {
        printf("val : %d pr : %d \n",arr[i].val,arr[i].pr);
    }
}
void main(){
    enqueue(20,10);
    enqueue(30,20);
    enqueue(40,30);
    enqueue(50,40);
    enqueue(60,50);
    enqueue(70,40);
    dqueue();
    display();
}