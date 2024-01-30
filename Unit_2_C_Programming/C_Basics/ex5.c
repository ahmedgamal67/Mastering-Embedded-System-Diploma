/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */


// EX5: c program to check if a character is an alphabet or not
#include"stdio.h"

int main()
{
	char c;
	printf("please enter the character :\n");
	scanf("%c ",&c);
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("%c is an alphabet",c);
	}else
	{
		printf("%c is not an alphabet",c);
	}

}
