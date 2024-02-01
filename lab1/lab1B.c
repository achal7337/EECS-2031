/***************************************
* 22SU - Lab1 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/

#include <stdio.h>




main()
{
  int a, b, c;
  printf("Enter month, day and year separated by spaces: " );
 
  scanf( "%d %d %d",  &a, &b, &c);     /* assign value to a b  */
 
  printf("The input '%d %d %d' is formatted as %d/%d/%d and %d-%d-%d\n", a, b, c, c, a, b, c, a, b);
}

