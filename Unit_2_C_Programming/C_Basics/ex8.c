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
	char op;
	int x,y;
	int res;
	printf("enter the operation \n");
	scanf("%c",&op);
	printf("enter the 2 numbers \n");
	scanf("%d %d",&x,&y);
	switch(op)
	{
	case '*':
		res = x*y;
		break;
	case '/':
		res = x/y;
		break;
	case '+':
		res = x+y;
		break;
	case '-':
		res = x-y;
		break;
	default:
		printf("wrong operation \n");
		break;
	}
	printf("%d ",res);
}
