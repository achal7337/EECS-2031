/***************************************
* 22SU - Lab2 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/
#include<stdio.h>
isDigit(char c){
    if (c>=48 && c<=57)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

isUpperLetter(char c){
    if (c >= 97 && c <= 122)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){
    char c;
    int n;
    c = getchar();
    while (c != EOF)
    {   

        if (isUpperLetter(c))
        {
            c = c - 32;
        }

        else if (isDigit(c))
        {
            n = c - '0';

            if (n > 5)
            {
                c = '+';
            }

            else if (n < 5)
            {
                c = '-';
            }

            else{
                c = '5';
            }
        }
        putchar(c);
        c = getchar();
    }
    return 0;
}

