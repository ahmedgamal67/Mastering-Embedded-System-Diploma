/*
 * main.c
 *
 *  Created on: Jun 29, 2023
 *      Author: JIMMY
 */

//assignment 2
// EX3: c program to find the Transpose of matrix
#include"stdio.h"

int main()
{
	int m[100][100];
	int t[100][100];

	int r, c;

	int i, j;

	/* Assign rows and columns */
	printf("Enter rows and column of matrix : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &r, &c);

	/* Assign matrix values */
	printf("Enter element of the matrix : \n");
	for (i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Enter element %d%d : ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &m[i][j]);
		}
	}

	/* printing matrix */
	printf("Entered matrix:\n");
	for (i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	/* calculating transpose */
	for (i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			t[j][i] = m[i][j];
		}
	}

	/* printing transpose matrix */
	printf("Transpose of Matrix:\n");
	for (i = 0; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
	return 0;
}
