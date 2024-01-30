/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */


// EX6: c program to calculate the sum of 100 number
#include"stdio.h"

int main()
{
	int sum =0;
	int i;
	for(i=0;i<100;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);
}
