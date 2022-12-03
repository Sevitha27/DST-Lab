#include<stdio.h>
#include<conio.h>
#define MAX 3
int queue[MAX];
int front=-1,rear=-1;

void insert();
int delete();
void display();

int main()
{
  int option,val;
  do
  {
   printf("1.Insert\t2.Delete\t3.Display\t4.Exit\n");
   printf("Enter your choice:\n");
   scanf("%d",&option);

   switch(option)
   {
    case 1:insert();
           break;

    case 2:val=delete();
           if(val!=-1)
           printf("The number deleted is:%d\n",val);
           break;

    case 3:display();
           break;
    }
   }while(option!=4);
   getch();
   return 0;
}

void insert()
{
 int num;
 printf("Enter the no to be inserted:\n");
 scanf("%d",&num);

 if(rear==MAX-1)
 printf("\nOverflow");
 else if(front==-1&&rear==-1)
 front=rear=0;
 else
 rear=rear+1;
 queue[rear]=num;
}

int delete()
{
 int val;
 if(front==-1||front>rear)
 {
   printf("\nUnderflow");
   return;
 }
 else
 {
   val=queue[front];
   front=front+1;
   if(front>rear)
   {front=rear=-1;}
   //else
    //front++;
   return val;
 }
}

void display()
{
  int i;
  if(front==-1||front>rear)
  printf("\nQueue if empty");
  else
  {
   for(i=front;i<=rear;i++)
   printf("\t%d",queue[i]);
  }
}
