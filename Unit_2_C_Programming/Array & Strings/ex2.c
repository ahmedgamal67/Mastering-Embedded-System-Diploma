/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */

//assignment 2
// EX1: c program to find the sum of 2*2 multidimensional array
#include"stdio.h"

int main()
{
	int i,j,sum[2][2];
	int arr1[2][2];
	int arr2[2][2];
	printf("enter the elements of first array :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the elements of second array :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("enter the elements of first array :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] =arr1[i][j]+arr2[i][j];
		}
	}
	printf("the sum of 2 array is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",sum[i][j]);
		}
	}
}
