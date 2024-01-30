/*
 * ex2.c
 *
 *  Created on: Dec 17, 2023
 *      Author: JIMMY
 */

// Ex2: check if character is vowel or constant

#include"stdio.h"

int main()
{
	char c;
	printf("Please enter the character: \n");
	scanf("%c",&c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		printf("%c is a vowel character \n",c);
	}else
	{
		printf("%c is a constant character \n",c);
	}
}
