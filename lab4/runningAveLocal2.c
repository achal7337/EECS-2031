// programme for runningAveLocal2()
// your information goes below
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/

#include <stdio.h>

void r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        r_avg(input);

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &input); // reads inputs again
    }
	
    return 0;
}

void r_avg(int input)
{
    // using static , making count and a statuc local variable because its value is maintained between function calls
    static int a;
    static int count;
    a += input;
    
    count++;
    double resu = (double)  a/count;
    printf("running average is %d / %d = %.3f",input,count,resu);     
}
