#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1,i,ch;
void enque();
void deque();
void display();
void exit();
int main()
{
printf("1.enque");
printf("2.deque");
printf("3.display");
printf("4.exit");
while(1)
{
    printf("enter the choice");
scanf("%d",&ch);
switch(ch){
    case 1:
    {
    enque();
    break;
    }
case 2:
  {
deque();
break;
  }
case 3:
  {
display();
break;
   }
case 4:
  {
    exit(0);
    break;
   }
default:
printf("wrongg");
}
}
}
void enque(){
if(rear==MAX-1)
{
printf("queue is overflow");

}
else
{
int data;
if(front==-1)
 {
front=0;
 }
printf("enter data");
scanf("%d",&data);
rear++;
queue[rear]=data;
}
}
void deque()
{
if(front==-1||front>rear)
  {
    printf("queue empty");
  }
else
   {
    printf("poped=%d",queue[rear]);
    rear--;
   }

}
void display()
{
if(front==-1)
   {
    printf("queue is empty");
  }
else
   {
    printf("elements");
    for(i=front;i<=rear;i++){
        printf("%d",queue[i]);
    }
}

}