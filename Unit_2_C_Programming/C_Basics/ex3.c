/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */


// Ex3: c program to find the largest number among 3 numbers

#include"stdio.h"

int main()
{
	int x,y,z;
	int res;
	printf("please enter the numbers :\n");
	scanf("%d %d %d",&x,&y,&z);
	if(x > y)
	{
		res =  x > z ? x : z;
	}else
		res = y > z ? y : z;

	printf("%d is the largest number ",res);
}
