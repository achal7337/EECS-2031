#include <stdio.h>
/***************************************
* 22S - Lab06 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/

void setArr (int, int);

int * arr[10]; // array of 10 int pointers. Global variable

int main(int argc, char *argv[])
{
     int i;
       
     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);
       
        
     for(i=0; i<5;i++) 
        printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i) );   /* should be -10,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value vv */
void setArr (int index, int vv){
     int i = vv;
     arr[index] = &i;
}
/* OUTPUT 
arr[0] -*-> 400 400 
above  output is not random, it is because when function is called all the elements inarr points to address of local variable.

arr[1] -*-> 32626 32626
arr[2] -*-> 32626 32626
arr[3] -*-> 32626 32626
arr[4] -*-> 32626 32626
this values are random garbage values. local variable is in stack memory so memory alloccated by local variable is deallocated when the function is done. thats why random values