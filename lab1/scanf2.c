/***************************************
* 22SU - Lab1 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/

#include <stdio.h>

int sum (int i, int j)
{
  return i+j;           
}


main()
{
  int a, b;
  printf("Please enter two integers separated by a blank: " );
 
  scanf( "%d<><><>%d",  &a, &b);     /* assign value to a b  */
 
  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}

