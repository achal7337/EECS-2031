//add your info below
/***************************************
* 22S - Programming Assignment 1 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/


#include <stdio.h>
#define SIZE 40    // assume that not more than 40 literals in the input
int main(){
 
  int c;
  int value;
  int resu[SIZE];
  int i = 0;
  int a = 0;
  int minus = 0 ;
  value = 0;

  c = getchar();
  while ( c != EOF){ 
  
  
    if (c >= '0' && c <= '9' )
    { 
      value = ((value*10) + (c-'0'));
     
    }  
    else if (c == '-'){
      minus = 1;
    }
    else if ((c == ' ' )|| (c == '\n')){
    if(minus==1)
        {value = value*-1;}
      else 
        {value = value;}
    resu[a]=value;
      a++;
      value = 0;
      minus = 0;
    }

    
   c = getchar();
  }
 
  printf("--------\n");
  
  for(i=0; i< a;i++)
    printf("%d\t%d\n", resu[i],resu[i] *2);
 
  return 0;
 
}


