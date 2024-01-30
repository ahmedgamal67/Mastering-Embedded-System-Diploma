/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */

//assignment 2
//EX7 C Program To Find the length of string

#include <stdio.h>

int main()
{
	char s[100];
	int i,count =0;
	printf("enter a string \n");
	gets(s);
	while(s[i]!='\0')
	{

		count ++;

		++i;
	}
	printf("the length of string is = %d",count);
	return 0;
}

