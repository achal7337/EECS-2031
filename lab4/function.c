/***************************************
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/

#include <stdio.h>

// define global variables and a function

int sum;
double resu;
int count;
void r_avg (void)
{
    resu = (double) sum/count;
    printf("running average is %d / %d = %.3f\n", sum, count, resu);
}

