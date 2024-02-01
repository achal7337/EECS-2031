//programme for runningAveGlobal()
//your infomation goes below
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/

#include <stdio.h>
extern int sum;
extern int count;
extern double resu;
int main(int argc, char *argv[])
{
    int input;

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
    count++;
    sum += input;
      r_avg();

      // reads inputs again
     printf("Enter number (-1 to quit): ");
     scanf("%d", &input);
     }
	 
     return 0;
}

