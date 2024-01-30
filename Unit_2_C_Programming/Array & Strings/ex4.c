/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */

//assignment 2
// EX4_C_Program_To_Insert_An_Element_in_a_Array.

#include"stdio.h"

int main()
{
	int arr[10];
	int n,insrted_num,location,i;
	printf("enter number of element \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("enter the number to be inserted \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&insrted_num);

	printf("enter the location \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(i=n-1;i>0;i--)
	{
		arr[i+1] = arr[i];
		if(arr[i] == location)
		{
			arr[i] = insrted_num;
		}
	}
	printf("printing new array \n");
		for(i=0;i<=n;i++)
		{
			printf("%d ",arr[i]);
		}


	return 0;
}
