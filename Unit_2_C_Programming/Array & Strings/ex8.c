/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */

//assignment 2
//EX7 C Program To reverse string

#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	char si[100];
	int i,j=0;
	printf("enter a string \n");
	gets(s);
	for(i = strlen(s);i>0;i--)
	{
		si[j] = s[i-1];
		++j;
	}
	/* Printing reverse string*/
		printf("Reverse string is : %s", si);
		return 0;
}

