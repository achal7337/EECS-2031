//your info goes here
/***************************************
* 22S - Lab05 *
* Author: Last name, first name *
** Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/

/* Passing an array to a function. */

#include <stdio.h>

#define MAX_INPUT 22
 
// more headers, declarations, as needed


void display(int *,int);
int largest(int *,int);

 main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;

     /* Input MAX_INPUT values from the stdin keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array+count)=i; // store in array[count] without using []
        count++;
     }
        *(array+count)=-10;

      /* Call function and display the return value. */
      printf("Inputs: ");
      display(array,count);

     
     
     printf("\nLargest value: %d\n", largest(array,count));
     
     return 0;
 }
 
 /* displays the content of int array */
 void display(int *arr,int n)
 {

     int i;
    for (i = 0; i < n;i++){
        printf ("%d ",*(arr+i));
    }
 }


/* This function returns the largest value */
/* in the int array */
 int largest(int * arr,int n)
 {
     int max = *arr;
     int i=0;
     for(i=0;i<n;i++){
         if(*(arr+i)>max){
           max = *(arr+i);
         }
        // else if(max<*(arr+i)){
          //   max= *(arr+i);
         //}
     }
     return max;
 }
