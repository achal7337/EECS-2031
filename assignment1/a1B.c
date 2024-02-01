//add your info below
/***************************************
* 22S - Programming Assignment 1 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/


#include <stdio.h>
#include <math.h>
#define SIZE 40    // assume that not more than 40 literals in the input
int main(){
 
  int c;
  float value;
  float resu[SIZE];
  int i = 0;
  int a = 0;
  int point = 0;
  int minus = 0;
  value = 0.0;

  c = getchar();
  while ( c != EOF){ 
  
    if (c == '.'){
      point ++;
    }
    else if (c >= '0' && c <= '9' )
    { 
      
      if (point)
        point++;
      
      value = ((value*10.0) + (1.0*(c-'0')));
        
        }
   
    else if (c == '-'){
      minus = 1;
    }
    
    else if ((c == ' ' )|| (c == '\n')){
    value =  value/(pow(10,point-1));
    if(minus==1)
        {value = value*-1;}
    else 
        {value = value;}
    
    
    resu[a]=value;
      a++;
      value = 0;
      minus = 0;
      point = 0;
    }

    
   c = getchar();
  }
 
  printf("--------\n");
  
  for(i=0; i< a;i++)
    printf("%.4f\t%.4f\n", resu[i],resu[i] *2);
 
  return 0;
 
}


