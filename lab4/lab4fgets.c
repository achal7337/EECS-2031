// program for lab4fgets()
// your information goes below
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define SIZES 10
#define SIZES2 40

int main(int argc, char *argv[])
{
     char resu[SIZES2];
     char input[SIZES2];    
     char name[SIZES];  
     int age;
     float rate;
      int flor;
      int cel;
     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);
     while (strcmp(input,"exit\n"))
     {    
       //output original input using two IO functions.
      printf("%s", input);  // no \n is needed 
      fputs(input, stdout); 
      
      sscanf(input,"%s %d %f",name,&age,&rate);

        if(name[0]<=122 && name[0] >= 97)     name[0] = name[0]-32;
        age+=10;
        rate*=2.0;
        flor = (int)(floor(rate));
        cel = (int)(ceil(rate));
        sprintf(resu,"%s-%d-%.3f-[%d,%d]",name,age,rate,flor,cel);
        printf("%s\n\n",resu);
              

       
       /* now use fgets() to read inputs again */

      printf("Enter name, age and rate (pr \"exit\"): ");
      fgets(input,40,stdin);

     } 
      return 0;
}
