// programme for lab4pointer()
// your information goes below
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/

#include <stdio.h>



int main()
{
    int age = 10;
    int age1 = 100;
    int *ptr = &age;
    printf("age: %d %d\n", age, *ptr); 
    *ptr = 14;
    printf("age: %d %d\n", age, *ptr);
    int *ptr2  = &age1;
    *ptr2=(*ptr) * 3;
    printf("age: %d %d\n", age, *ptr2);
    ptr2 = ptr;
    printf("ptr2's current pointer: %d\n", *ptr2);
    printf("age: %d %d %d\n", age, *ptr, *ptr2);
    *ptr2 = *ptr2 - 1;
    printf("age: %d %d %d\n", age, *ptr, *ptr2);
    printf("%p %p %p\n", &age, ptr, ptr2);



    return 0;
   
}
