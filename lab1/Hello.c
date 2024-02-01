#include <stdio.h>


main()
{
    /*declaration*/
int a; int b; int c;
printf("Please enter number: ");
scanf("%d", &a);
b = a*2;
c = a*3;

printf("Hi, input is %d. Double and triple of %d is %d and %d, respectively\n",a,a,b,c);
}