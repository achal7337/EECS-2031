/* add your info here */
/***************************************
* 22S - Lab06 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/

#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);
int len();
int get(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);   
   insertBegining(500);

   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");

   printf("len: %d\n", len() );
   printf("get(0): %d\n", get(0));
   printf("get(1): %d\n", get(1));
   printf("get(3): %d\n", get(3));

}   

/* insert at the begining of the list*/
void insertBegining(int dat){
   struct node *newNode;
   newNode = malloc(sizeof(struct node));
   (*newNode).data = dat;

   (*newNode).next = head;
   
   head = newNode;

}

/*  'length' info of the list */
int len(){ 
   int i = 0;
   struct node * cur;
   for(cur = head;  cur != NULL; cur = cur-> next)
       i++;
   return i;
}

/* get value at index 'index' */
int get(int index){
   int i;
   struct node * cur;
   cur = head;
   for(i = 0;  i < index; i++){
       cur = cur -> next;
   }
   return cur -> data;
}
