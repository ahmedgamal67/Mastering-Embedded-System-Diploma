/*
 * ex1.c
 *
 *  Created on: Dec 17, 2023
 *      Author: JIMMY
 */

//Ex1: Write a C program to check whether a number is even or odd

#include"stdio.h"

int main()
{
	int num;
	printf("enter the integer number you want to check :\n");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("%d is an even number\n",num);
	}else
		printf("%d is an odd number",num);
}
