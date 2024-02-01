// program for lab4fgets()
// your information goes below
/***************************************
* 22S - Lab4 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/

#include <stdio.h>
.....

#define SIZES 10
#define SIZES2 40

int main(int argc, char *argv[])
{
     char resu[SIZES2];
     char input[SIZES2];    
     char name[SIZES];  
     ....
	
     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);
     while (...)
     {    
       //output original input using two IO functions.
       printf("%s", input);  // no \n is needed 
       fputs(input, stdout); 
      
       .... may need to tokenize input
 

       ....

       /* now use fgets() to read inputs again */

     } 
      return 0;
}
