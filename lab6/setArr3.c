#include <stdio.h>
#include <stdlib.h>
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
     int *i =(int*) malloc(sizeof(int));
     *i = vv;
     arr[index] =i;
}
