// your info below
/***************************************
* 22S - Programming Assignment 1 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/

#include <stdio.h>

/*********  DO NOT CHANGE THESE CONSTANTS IN THE FINAL SUBMISSION *********/

#define MAX_SIZE 20
#define SUCCESS 0

int size;  // global variable
int i=0;
int j=0;
int a = 0;
/******************  YOUR CODE STARTS HERE ******************/
/************************************************************/
/* 
   Input: array A with 'size' elemments in it, and an integer d
   Output: d is added to the array.
   Return a non-negative number if the addition is successful.
   Return a negative number if the addition is unsuccessful.
   Error condition(s): A reaches the MAX_SIZE already.
 */
 
int myAdd( int A[],  int d )
{
   /* ADD YOUR CODE HERE */
  if(size>= MAX_SIZE){
     return -1;
   }

   else{
   
    i = size -1 ;
    while(d<A[i]&&i>=0)
    {
      A[i+1]=A[i];
      i--;
    }
    A[i+1] = d;
    size++;
    return 0;
  }

}


/* 
   Input: array A with "size" elements in it, and an integer d
   Output: If d is found in the array, return the index of the cell containing d.
   Otherwise return a negative number if d is not found.
   Error condition(s): d is not found.

   note the search should be binary search, and iterative (i.e., no recursive)
 */
 
int myBinarySearch_Iterative( int A[], int d )
{
   /* ADD YOUR CODE HERE */ 
  int lowest = 0;
  int highest = size-1;
  int mid;

  while (highest >= lowest ){
    mid = (highest + lowest)/2;
    if(A[mid]==d){
      return mid;
    }
    else if(A[mid]<d){
      lowest = mid + 1;
    }
    else if (A[mid]>d)
      highest = mid -1;
  }
  return -1;



}

/* 
   Input: array A with "size" elements in it, and an integer d
   Output: Return a negative number if d is not found.
   Otherwise d is removed from the array and return 0.
   Error condition(s): d does not exist in A.
 */

int myRemove( int A[],  int d )
{
   /* ADD YOUR CODE HERE */
 int pos;

 pos = myBinarySearch_Iterative(A,d);

 if(pos >=0){
     for (i = pos ; i < (size)-1; i++){
       A[i]=A[i+1];
     }
     size--;
 }
 
 
 else {
   return -1;
 }

}


/*******************  YOUR CODE ENDS HERE *******************/
/************************************************************/

/*********  DO NOT CHANGE ANYTHING BELOW THIS LINE IN THE FINAL SUBMISSION *********/

/* 
   Input: array A with "size" elements in it,
   Output: Display the array on the standard output with one space between every two numbers. 
   Print a new line after the last element.
 */

int printArray( int A[])
{
  int i; 
  printf("[ ");
  for ( i = 0; i < size; i++ )
     printf("%d ", A[ i ] );
  printf( "]\n" );
  return 0;
}

/* main() function 
 */
int main()
{
 int myArray[MAX_SIZE];
 int retCode, data, size;
 char action;
 char a[20];
 do {
    fgets(a, 20, stdin);
    sscanf(a, "%c %d", &action, &data ); 
 
   switch( action )
   {
    case 'a': /* add */
    case  'A':
      retCode = myAdd( myArray, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray); 
      }
      else
        printf( "Failed to add %d.\n", data );  
      break; 
        
    case 'r': /* remove */
    case 'R':
      retCode = myRemove( myArray, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray); 
      }
      else
        printf( "Failed to remove %d.\n", data );    
      break;  
                    
    case 's': /* search */
    case 'S':
      retCode = myBinarySearch_Iterative( myArray, data );
      if( retCode >= 0 )
        printf( "Found %d at index %d.\n", data, retCode );
      else 
        printf( "Not found %d.\n", data );        
      break;
      
    case 'q':  /* quit */
    case 'Q':
      /* To quit, enter an arbitrary integer and character (action) 'q' or 'Q'.
         This is not elegant but makes the code simpler.  */  
      /* Do nothing but exit the switch statement */
      break; 
    
    default:
      printf( "Invalid operation %c\n", action );  
  }
 } while ( action != 'q' && action != 'Q' );

 return 0; 
} // end main
