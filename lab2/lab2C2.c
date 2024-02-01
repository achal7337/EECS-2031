/***************************************
* 22SU - Lab2 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/

#include <stdio.h>

#define SIZE 10

int isPrime(int n){
  int j, flag = 1;
    for(j = 2; j <= n / 2; ++j) {
        if(n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}



int main ()
{
  int i,j,flag;
  int count=0;

  int arr[SIZE], arrEven[SIZE], arrPrime[SIZE];
  int time(int a);
  int srand(int a);
  int rand();
  srand(time(0));
  for( i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // random number in range of [0,40] inclusive
    arr[i] = ran;
  }

  // display array
  printf("array [");
  
  for( i=0; i<SIZE; i++) {
    printf("%d ",arr[i]);
  } 
  printf("]\n");

  // scan the array to find even and prime numbers, and put them in corresponding arrays
  // create two arrays of same size of arr, to hold even and prime numbers; you may add other variables as needed
 
  for( i=0; i<SIZE; i++) {
    if (arr[i]%2==0){
      arrEven[j]=arr[i];
      j++;   
      count++;
    }
  } 

  printf("%d even numbers: ",count);
  for(i=0;i<j;i++)
    {
	  if(arrEven[i]>=0){
      printf("%d ",arrEven[i]);
      }
   }
  printf("\n");
  // output even numbers
  

  for (i=0;i<SIZE;i++){
    
    flag = isPrime(arr[i]);
   
    if(flag==1){
      arrPrime[j]=arr[i];
     
      j=j+1;
      
    }
  }
  int count1=0;
  for(i=0;i<SIZE;i++){
    if (arrPrime[i]>0)
    count1 ++;
  }
  

 printf("%d prime numbers: ",count1);
  for(i=0;i<SIZE;i++)
    {
	  if(arrPrime[i]>0){
      
      printf("%d ",arrPrime[i]);
      }
   }
  
  printf("\n");


  // output prime numbers
return 0;
}

