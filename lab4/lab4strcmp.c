//programme for mystrcmp()
//your info goes below
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
int my_strcmp(char [], char []);
int main(){
   char a[SIZES];
   char b[SIZES];
   
   scanf("%s", a); 
   scanf("%s",b);
    
   while (((strcmp(a, "xxx")) || (strcmp(b, "xxx")))){
      int resu = strcmp(a,b); 
      if ( resu < 0 ) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (resu > 0) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" are same\n", a, b);
      
      int resu2 = my_strcmp(a,b);
      if ( resu2 < 0 ) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (  resu2 > 0 ) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n\n", a,b);
      scanf("%s", a); 
      scanf("%s",b);

   }
}

// your own version of implementation goes here
int my_strcmp(char a[], char b[]){
int i;

if (strlen(a)!=strlen(b)){
   for(i=0;i<30;i++){
      if(a[i]==b[i]){
         i++;
      }
      else{
      return a[i]-b[i];
   }
   }
}
/*else if (strlen(a)<strlen(b)){
   return 1;
}
else if (strlen(a)>strlen(b)){
   return -1;
}*/
else {
   for(i =0;i<strlen(a);i++) {
      if(a[i]==b[i]){
         i++;
      }
      if(a[i]!=b[i]){
         return a[i]-b[i];
      }
      if(a[strlen(a)-1]==b[strlen(b)-1]){
         return 0;
      }


   }
   }



}
