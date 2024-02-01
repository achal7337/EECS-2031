/* your info here */
/***************************************
* 22S - Lab06 *
* Author: Last name, first name *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/

/* Reads in a list of strings from the keyboard, re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 35
 #define MAX_COLS  50 
 void exchange2D(char p[][MAX_COLS],int);
 void print2D(char p[][MAX_COLS],int);

 main()
 {

     int x =0;
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
 
     /* Read in the lines from the keyboard now, using function fgets() */
     printf("Enter string: ");
     fgets(inputs[x], MAX_COLS,stdin);
     
     while ( strcmp("xxx\n",inputs[x]) )
     {
         x++;
         printf("Enter string: ");
         fgets(inputs[x], MAX_COLS, stdin);
     }
     printf("\n");
     
     // display the array by calling function print2D(...)

        print2D(inputs,x);
     // swap the first and second row here
        char temp[MAX_COLS];
        strcpy(temp,inputs[0]);
        strcpy(inputs[0],inputs[1]);
        strcpy(inputs[1],temp);


     // call sub-function exchange2D() to swap some other rows
        exchange2D(inputs,x);
     printf("\n== after swapping ==\n");
     
     // display the exchanged array by calling function print2D() 
        print2D(inputs,x);
	 
     
     return 0;
 }


 // do exchange of rows. have to involve data movement 
 void exchange2D(char p[][MAX_COLS], int n)
 {
        
        char temp[MAX_COLS];
        int i;
        for( i = 2; i<(n-1);i=i+2)
        {
        
        strcpy(temp,p[i]);
        strcpy(p[i],p[i+1]);
        strcpy(p[i+1],temp);

        }
 }

 // print the 2D array, row by row
 void print2D(char p[][MAX_COLS], int n)
 {
     int i;
     for (i=0;i<n;i++){
         printf("[%d]: %s",i,p[i]);
     }
 }                        

