/***************************************
* 22SU - Lab1 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/

#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    count++; //include spaces and '\n'

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);

}

