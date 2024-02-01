/* your info here */
/***************************************
* 22S - Lab06 *
* Author: Last name, first name *
* Author: Gandhi,Achal*
* Email: achal167@my.yorku.ca *
* EECS_username: achal167 *
* Yorku ID:218319111
****************************************/
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 int getSum(char *[],int);
 int getDiff(char *[],int);

 int main(int argc, char *argv[])
 {

     int i ;
     
     printf("There are %d arguments (excluding\"a.out\")\n", (argc-1));
        if (strcmp(argv[1],"sum")==0){
            for(i=2;i<argc;i++){
                if ( i == (argc-1))
                    printf("%s\n",*(argv+i));
                else
                    printf("%s + ",*(argv+i));
            }
            printf(" = %d\n", getSum(argv,argc));
        }

        else {
           for(i=2;i<argc;i++){
                if ( i == (argc-1))
                    printf("%s\n",*(argv+i));
                else
                    printf("%s - ",*(argv+i));
            }
            printf(" = %d\n", getDiff(argv,argc));
        }


 }

 int getSum(char *a[], int n){
        int i;
        int sum = 0;

        for (i=2;i<n;i++ ){
            sum += atoi((*(a+i)));
        }
        return sum;
 }


 int getDiff(char *a[], int n){
        int i;
        int diff = atoi(*(a+2));

        for (i=3;i<n;i++ ){
            diff -= atoi((*(a+i)));
        }
        return diff;
 }