//programme for my_strcat()
//your information goes below
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/


#include<stdio.h>
#include<string.h>

#define SIZES 30
void my_strcat(char[], char[]);

int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);
   while (((strcmp(a, "xxx")) || (strcmp(b, "xxx")))){
    
      strcpy(c,a); strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);

      scanf("%s",a);
      scanf("%s",b);
 
   }
}

//your own version of implmentation goes here
void my_strcat(char a[], char b[]){
int i=0;
int j=0;
while(a[i] != '\0'){
   i++;
}
while(b[j] != '\0'){
   a[i]=b[j];
   i++;
   j++;
}
}
