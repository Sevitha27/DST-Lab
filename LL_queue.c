#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};

struct node *head=NULL;

void enqueue()
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter the value to be inserted\n");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
  {
    head=temp;
    return;
  }
  else{

    struct node *ptr;
    ptr=head;
    while(ptr->link!=NULL)
    {
      ptr=ptr->link;
    }

    ptr->link=temp;
  }

}

void dequeue()
{
  struct node *ptr;
  if(head==NULL)
  {
    printf("Queue is empty\n");
    return;
  }
  else{
  ptr=head;
  head=ptr->link;
  printf("value dequeued =%d",ptr->data);
  free(ptr);
  }
}

void display()
{
  if(head==NULL)
  {
    printf("Queue is empty\n");
    return;
  }
  else
  {
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
      printf("%d\t",ptr->data);
      ptr=ptr->link;
    }
  }

}

void main()
{
  int choice;
  while(1)
  {

    printf(" \n1. to enqueue\n 2. to dequeue\n 3. to display\n 4. to exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:enqueue();
             break;
      case 2:dequeue();
             break;
      case 3:display();
             break;
      case 4:exit(0);
             break;
    }
  }
}

