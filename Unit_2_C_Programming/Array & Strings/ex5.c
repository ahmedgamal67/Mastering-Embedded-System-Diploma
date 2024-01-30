/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */

//assignment 2
// EX5: c program to search an element in an array
#include"stdio.h"


int main()
{
	int i,num,n,res;
	int arr[10];

	printf("enter the number of array elements \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("enter the number you search for \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	for(i=0;i<n;i++)
	{
		if(arr[i] == num)
		{
			res = i;
			break;
		}
	}
	printf("number found at location %d",res+1);


}
