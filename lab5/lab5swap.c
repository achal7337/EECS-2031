// your info goes here
/***************************************
* 22S - Lab05 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/
#include <stdio.h>

void swapIncres(int*, int*, int*);
void swap(int*,int*);

int main( ) {
  int a, b,c; 
  /* Read in three integers */
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncres(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     /* read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

//swaps and also increments a,b,c
void swapIncres(int *x, int *y, int *z){
   void swap(x,z);

   (*x) += 100;
   (*y) *= 2;
}

void swap(int *x, int *z){
   int temp = *x;
   *x = *z;
   *z = temp;

}
