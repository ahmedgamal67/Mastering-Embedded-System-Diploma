/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */


// Ex4: c program to if  the number is positive or negative

#include"stdio.h"

int main()
{
	int x;
	printf("please enter the number :\n");
	scanf("%d ",&x);
	if(x > 0)
	{
		printf("%d is a positive number",x);
	}else
	{
		printf("%d is a negative number",x);
	}

}
