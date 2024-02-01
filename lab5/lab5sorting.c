//your info goes here

/***************************************
* 22S - Lab05 *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/


#include <stdio.h>
#include <string.h>

#define SIZE 46 
// more headers, declarations, as needed

void sortArr(char *);
void sortArr2(char *);



int main()
{
   char arr[SIZE]; char arrB[SIZE];
   fgets(arr,SIZE,stdin);
   while ((strcmp(arr,"quit\n")))
   {
        // manually remove the trailing \n
       
       arr[strlen(arr)-1] = '\0';


       strcpy(arrB, arr);
       
       sortArr(arr);
       printf("%s\n", arr);

       sortArr2(arrB);
       printf("%s\n\n", arrB);

       //read again
      fgets(arr,SIZE,stdin);
    }
   return 0;
}

// two sorting functions

void sortArr(char *ar){
    int len =strlen(ar);
    int i;
   
    for(i=0;i<len-1;i++){
        int j;
        for(j=0;j<len-1;j++){
            if(*(ar+j)>*(ar+(j+1))){
            char temp = *(ar+j);
            *(ar+j) = *(ar+(j+1));
            *(ar+(j+1))= temp;
            }
        }
    }
}

void sortArr2(char *ar){
   int i=0;
   int j;
   char temp;
   char a;

   for (i=0; i<=(strlen(ar)-2);i++){
      a = i;
      for (j = i+1;j<=(strlen(ar)-1);j++ ){
         if(*(ar+j)<*(ar+a)){
            a = j;
         }
      }
   

      temp = *(ar+i);
      *(ar+i) = *(ar+a);
      *(ar+a )= temp;
   }
}