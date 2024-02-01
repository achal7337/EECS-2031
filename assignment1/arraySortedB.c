//your info below
/***************************************
* 22S - Programming Assignment 1 *
* Author: Last name, first name *
* Email: Your email address *
* EECS_username: Your EECS login username *
* Yorku ID: Your YorkU student number
****************************************/

#include <stdio.h>

/*********  DO NOT CHANGE THESE CONSTANTS IN THE FINAL SUBMISSION *********/

#define MAX_SIZE 20
#define SUCCESS 0

/******************  YOUR CODE STARTS HERE ******************/
/************************************************************/
/* 
   Input: array A with "siz" elements in it and an integer d
   Output: d is added to the array.
   Return a non-negative number if the addition is successful.
   Return a negative number if the addition is unsuccessful.
   Error condition(s): A reaches the MAX_SIZE already.
 */
 
int myAdd( int A[], int * siz, int d )
{
   /* ADD YOUR CODE HERE */

  int i =0;
   if((*siz)>= MAX_SIZE){
     return -1;
   }

   else{
   
    i = (*siz) -1 ;
    while(d<A[i]&&i>=0)
    {
      A[i+1]=A[i];
      i--;
    }
    A[i+1] = d;
    (*siz)++;
    return 0;
  }

}


/* 
   Input: array A with "siz" elements in it, and an integer d
   Output: If d is found in the array, return the index of the cell containing d.
   Otherwise return a negative number if d is not found.
   Error condition(s): d is not found.

   note: this should be a binary search, and should be recursive (i.e., no loops)
 */
 
int myBinarySearch_Recursive( int A[], int siz, int d )
{
   /* ADD YOUR CODE HERE */ 
   //call helper function

 return myBinarySearch_Recursive_helper(A,d,0,siz-1);
}

/* you may need a helper funciton with heading similar to this*/

int myBinarySearch_Recursive_helper( int A[], int d,  int start, int end)
{
  int mid;

  if (start>end)
    return -1;
  else
  {
    mid = (start+end)/2;
    if(d==A[mid])
      return mid;
    else if (d < A[mid])
      return myBinarySearch_Recursive_helper(A,start,mid-1,d);
    else if (d > A[mid])
      return myBinarySearch_Recursive_helper(A,mid + 1,end,d);
  }
}



/* 
   Input: array A with "siz" elements in it, and an integer d
   Output: Return a negative number if d is not found.
   Otherwise d is removed from the array and return 0.
   Error condition(s): d does not exist in A.
 */

int myRemove( int A[], int *siz, int d )
{
   /* ADD YOUR CODE HERE */
    int pos;
    int i;

 pos = myBinarySearch_Recursive(A,*siz,d);

 if(pos >=0){
     for (i = pos ; i < (*siz)-1; i++){
       A[i]=A[i+1];
     }
     (*siz)--;
 }
 
 
 else {
   return -1;
 }

}


/*******************  YOUR CODE ENDS HERE *******************/
/************************************************************/

/*********  DO NOT CHANGE ANYTHING BELOW THIS LINE IN THE FINAL SUBMISSION *********/

/* 
   Input: array A with "siz" elements
   Output: Display the array on the standard output with one space between every two numbers. 
   Print a new line after the last element.
 */

int printArray( int A[], int siz )
{
  int i; 
  printf("[ ");
  for ( i = 0; i < siz; i++ )
     printf("%d ", A[ i ] );
  printf( "]\n" );
  return 0;
}

/* main() function 
 */
int main()
{
 int myArray[MAX_SIZE];
 int retCode, data;
 char action;
 char a[20];
 int size = 0;
 do {
    fgets(a, 20, stdin);
    sscanf(a, "%c %d", &action, &data ); 
 
  switch( action )
  {
    case 'a': /* add */
    case  'A':
      retCode = myAdd( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to add %d.\n", data );  
      break; 
        
    case 'r': /* remove */
    case 'R':
      retCode = myRemove( myArray, &size, data );
      if ( retCode >= SUCCESS ) {
        printArray( myArray, size ); 
      }
      else
        printf( "Failed to remove %d.\n", data );    
      break;  
                    
    case 's': /* search */
    case 'S':
      retCode = myBinarySearch_Recursive( myArray, size, data );
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
