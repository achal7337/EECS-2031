//programme for lab4table2()
//your information goes below
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/


#include <stdio.h>


#define numROWS 20
#define numCOLUMNS 30
#define SIZE 10

int main(int argc, char *argv[])
{
     char input_table[numROWS][numCOLUMNS];
     int current_row=0;
     char name[SIZE];
     int age;
     int i;
     float rate;

  	
     printf("Enter name, age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // read into table row directly. add a \n.  Don't change this line
	sscanf(input_table[current_row],"%s %d %f",name, &age, &rate);


     while(strcmp(name,"xxx"))        
     {    
	 /* now, may need to 'tokenize' the current line input  */	    
	 
          for(i=0; i < SIZE;i++){
               if(name[i] <= 'z' && name[i]>= 'a') 
               name[i] = name[i] - 32; 
        }

        age += 10;
        rate = rate + (rate/2.0);

        current_row++; 
        sprintf(input_table[current_row], "%s %d %.2f", name, age, rate);
        
        printf("Enter name, age and rate: ");
        current_row++;
        fgets(input_table[current_row], 30,stdin);
        sscanf(input_table[current_row],"%s %d %f", name, &age, &rate); 


     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row-by-row */
	   for ( i = 0; i<current_row;i++)
        {
            printf("row[%d]: %s\n",i,input_table[i]);
        }
     return 0;
}

