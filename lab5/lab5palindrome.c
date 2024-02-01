// your info goes here
/***************************************
* 22S - Lab05 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/


#include <stdio.h>
#include <string.h>

#define SIZE 36

//... more headers, declarations, if needed
void printReverse(char *);
int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (  (strcmp(arr,"quit\n"))  )
   {
       // remove the trailing manually \n
      int i = 0;
      for (i =0; arr[i] != '\n';i++){}
      arr[i] = '\0';
      // print backward
      printReverse(arr);
   
      if (isPalindrome (arr)) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    return 0;
}


// assume char \n has already been removed manually
int isPalindrome (char * str)
{
   int i=0;
   int j;
   while (*(str+i)!= '\0'){
      i++;
   }

   i--;


   for (j = 0; j<=(i/2);j++){
      if(*(str+j) != *(str+i))
      return 0;

      i--;
   }
   return 1;
}

// assume char \n has already been removed manually
void printReverse(char * str)
{
   int i=0;
   for(i=0;*(str+i)!= '\0';i++){
     
   }

   i--;
   


   for (i;*(str+i)!='\0';i--){
      printf("%c",*(str+i));
   }
}



int isPalindromeR (char * str){
   int i=0;
   
   while (*(str+i)!= '\0'){
      i++;
   }

   i--;

   if(i == 0)
      {return 1;}

   else if(*(str)!= *(str+i))
      {return 0;}




    else 
    {
       *(str+i) = '\0';
       str = &(*(str+1));
       return isPalindrome(str); 
           }  
}
