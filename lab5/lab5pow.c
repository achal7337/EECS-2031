// your info goes here
/***************************************
* 22S - Lab05 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/

#include <stdio.h>

double my_pow(double, double);

int main(int argc, char *argv[])
{
	
   double base; 
   int expon;  
   printf("enter base and power: ");
   scanf("%lf %d", &base,&expon);

   while (base != -1000){
        double res1 = pow(base, expon);
        double res2 = my_pow(base, expon);
        printf("pow:    %.4f\n", res1);
        printf("my_pow: %.4f\n", res2);

     printf("enter base and power: ");
     scanf("%lf %d", &base,&expon);

        

    }
	
    return 0;
}

// This function shall be a RECURSIVE function
// i.e., in function should not use any loop(s) here
double my_pow(double base, double power)
{
 
 if(power==0.0){
      return 1.00;
      }

 else{ 
          if (power>0.0){
      return (base * my_pow(base,power-1));
      }
          else {
      return ((1/base) * my_pow(base,power+1));
 }
 }
}
