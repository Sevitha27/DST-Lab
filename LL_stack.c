#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *link;
};

struct node *head=NULL;

void push()
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data to be pushed\n");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
  {
    head=temp;
    return;
  }

  else{
    temp->link=head;
    head=temp;
  }
}

void pop()
{
  struct node *ptr;
  ptr=head;
  if(head==NULL)
  {
  printf("stack is empty item cant be popped\n");
  return;
  }

  else{
    ptr=head;
    head=ptr->link;
    printf("Element popped from the stack is-%d",ptr->data);
    free(ptr);
  }

}

void display()
{
  if(head==NULL)
  {
    printf("stack is empty\n");
    return;
  }
  else{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
      printf("%d\t", ptr->data);
      ptr=ptr->link;
    }
  }
}

void main()
{
  int choice;
  while(1)
  {
    printf("\n 1. to push\n 2. to pop\n 3.to display\n 4. to exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1: push();
              break;
      case 2: pop();
              break;
      case 3:display();
              break;
      case 4: exit(0);
              break;

    }
  }
}



