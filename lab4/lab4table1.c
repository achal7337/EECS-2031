//programme for lab4table1()
//your information goes below
/***************************************
* 22S - Lab4 *
* Author: Gandhi,Achal *
* Email: achal167@my.yorku.ca *
* eecs_username: achal167 *
* York Student #: 218319111
************************************** **/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

 
#define numROWS 20
#define numCOLUMNS 30

int main(int argc, char *argv[])
{
    char inputs_table [numROWS][numCOLUMNS];
    char name[10]; char ageS[10]; char rateS[10];
    int age;
    int a=0;
    int i;
    float rate;
		
    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS); 
       
    while (strcmp(name,"xxx"))        
    {  
	   
        sscanf(ageS,"%d", &age);

        sscanf(rateS,"%f",&rate);

        sprintf(inputs_table[a],"%s %s %s", name, ageS, rateS);
        a++;

        for(i=0; i < strlen(name);i++){
            if(name[i] <= 'z' && name[i]>= 'a') 
            name[i] = name[i] - 32; 
        }

        age += 10;
        rate = rate + (rate/2.0);

        sprintf(inputs_table[a], "%s %d %.2f", name, age, rate);
        a++;

          

       /* now read inputs again using function scanf(%s %s %s) */ 
        printf("Enter name, age and rate: ");
        scanf("%s %s  %s", name, ageS, rateS); 
    }
    
    printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row-by-row */      
	    for ( i = 0; i<a;i++)
        {
            printf("row[%d]: %s\n",i,inputs_table[i]);
        }

     return 0;
}

