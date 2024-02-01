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
  int count1 = 0;
  char a = 'a';
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    count++; //include spaces and '\n'
    if (c == a){
        count1++;
    }
    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);


  

  printf("# of char 'a': %d\n",count1);
}

