/***************************************
* 22SU - Lab2 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/
#include<stdio.h>


int isDigit(char);
int isLetter(char);
int isOperator(char);

isDigit(char c)
{
	
	if(c>=48 && c<=57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

isLetter(char c)
{
	
	if((c>=65 && c<=90) || (c>=97 && c<=122))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

isOperator(char c)
{
	if((c=='+') || (c=='-') || (c=='*') || (c=='/') || (c=='%'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void main()
{
	int a;
	char b;
	while(1)
	{
	        		
		printf("Enter an integer and a character separated by blank: ");
		scanf("%d %c",&a,&b);
		if(a==-10000)
		{
			break;
		}
		if(isDigit(b))
		{
			printf("Character '%c' represents a digit. Sum of %d and %c is %d\n\n",b,a,b,(a+b-48));
		}
		else if(isLetter(b))
		{
			printf("Character '%c' represent a letter\n\n",b);
		}
		else if(isOperator(b))
		{
			printf("Character '%c' represents an operator\n\n",b);
		}
		else
		{
			printf("Character '%c' represents others\n\n",b);
		}
         printf("\n");
	}
}