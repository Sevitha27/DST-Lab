#include<stdio.h>

#include<stdlib.h>



struct node

{

  int data;

  struct node *next;

};



void display();

void insert_begin();

void insert_end();

void insert_pos();

void delete_end();

void delete_begin();

void delete_pos();



struct node *head=NULL;





void display()

{

  printf("Elements are ................\n");

  struct node *ptr;

  if(head==NULL)

  {

    printf("List is empty\n");

    return;

  }



  else

  {

    ptr=head;

    while(ptr!=NULL)

    {

      printf("%d ",ptr->data);

      ptr=ptr->next;



    }

  }

}



void insert_begin()

{

  struct node *temp;

  temp=(struct node *)malloc(sizeof(struct node));

  printf("Enter the value to be inserted\n");

  scanf("%d",&temp->data);

  temp->next=NULL;

  if(head==NULL)

  head=temp;

  else{

    temp->next=head;

    head=temp;

  }

}



void insert_end()

{

  struct node *temp,*ptr;

  temp=(struct node*)malloc(sizeof(struct node));

  printf("Enter the value to be inserted\n");

  scanf("%d",&temp->data);

  temp->next=NULL;

  if(head==NULL)

  {

    head=temp;

  }

  else

  {

   ptr=head;

   while(ptr->next !=NULL)

   {

     ptr=ptr->next;

   }

   ptr->next=temp;

  }

}



void insert_pos()

{

  int pos,i;

  struct node *temp,*ptr;

    printf("enter the position ");

  scanf("%d",&pos);



  temp=(struct node*)malloc(sizeof(struct node));

  printf("enter the value to be inserted\n");

  scanf("%d",&temp->data);

  temp->next=NULL;

  if(pos==0)

  {

       temp->next=head;

    head=temp;



  }

else

{

  for(i=0,ptr=head;i<pos-1;i++)

  {

    ptr=ptr->next;



  }

  temp->next=ptr->next;

  ptr->next=temp;

}



}



 void delete_begin()

 {

   struct node *ptr;

   if(head==NULL)

   {

     printf("List is empty\n");

     return;

   }

   else

 {

   ptr=head;

   head=head->next;

   printf("the element deleted from the list-%d\n",ptr->data);

   free(ptr);

 }

 }



 void delete_end()

 {

   struct node *ptr,*temp;

   if(head==NULL)

   {

     printf("list is empty\n");

     return;

   }



   else

   {

     ptr=head;

     while(ptr->next!=NULL)

     {

       temp=ptr;

       ptr=ptr->next;

     }

     temp->next=NULL;

     printf("The elemennt deleted-%d",ptr->data);

     free(ptr);

   }

 }



 void delete_pos()

 {

   int i,pos;

   struct node*ptr,*temp;

   if(head==NULL)

   {

     printf("LIst is empty\n");

     return;

   }

   else

   {

     printf("Enter the position to be deleteed\n");

     scanf("%d",&pos);

     if(pos==0)

     {

       ptr=head;

       head=head->next;

      printf("the item deleted from the list is-%d",ptr->data);

      free(ptr);



     }

     else

     {

       ptr=head;

       for(i=0;i<pos;i++)

       {

         temp=ptr;

         ptr=ptr->next;

         if(ptr==NULL)

         {

           printf("\n position not found\n");

           return;

         }



       }

       temp->next=ptr->next;

       printf("The value deleted is-%d",ptr->data);

       free(ptr);

     }



   }

 }



void main()

{

  int choice;

  while(1)

  {



    printf("\n 1.insert at the beginning\n 2.insert at the end\n 3.insert at any position enter\n 4.display\n 5.delete beginning \n 6.delete at end\n 7.delete at a given position\n 8.exit\n");

  printf("Entere your choice..........\n");

  scanf("%d",&choice);

  switch(choice)

  {



    case 1:insert_begin();

           break;

    case 2:insert_end();

           break;

    case 3:insert_pos();

           break;

    case 4:display();

           break;

    case 5:delete_begin();

           break;

    case 6: delete_end();

            break;

    case 7:delete_pos();

           break;

    case 8:exit(0);

           break;



    deafult:printf("Enter the correct choice\n");

            break;



  }

  }

}


