/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */


// EX7: c program to find factorial of the number
#include"stdio.h"

int main()
{
	int num,fact =1;
	int i;
	printf("enter the number : \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact *=i;
	}
	printf("the factorial of %d is = %d",num,fact);
}
