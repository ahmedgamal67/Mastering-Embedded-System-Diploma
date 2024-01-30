/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */

//assignment 2
//EX6 C Program To Find frequency of characters in string

#include <stdio.h>

int main()
{
	char s[100];
	int i,count =0;
	char c;
	printf("enter a string \n");
	gets(s);
	printf("enter the character \n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	while(s[i]!='\0')
	{
		if(s[i] == c)
		{
			count ++;
		}
		++i;
	}
	printf("the number of frequency of char %c is = %d",c,count);
	return 0;
}

