/***************************************
* 22SU - Lab1 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/

#include <stdio.h>
float sum(float,float);
void greet(int);

int main()
{  
    
    int d, z;
   int a = 2031;
   greet(a);
   int b = 1012;
   greet(b);
   printf("Enter the number of interactions: ");
  
   
   scanf("%d", &z);
   for (d = 0; d < z; ++d){
    printf("Enter two float numbers separated by ## :");
    float x, y;
    scanf("%f##%f", &x, &y);
    float su= sum(x,y);
    printf( "%f + %f = %f\n", x,y, su);
   
 }
 return 0; 
}

/* function definition */
float sum (float i, float j){
   return i + j;             
}

/* modify this function */
void greet(int i){
  printf("Hello %d !\n", i);
}
