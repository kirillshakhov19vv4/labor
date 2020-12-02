#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
#include   <ctime>
int** createMatrix(int size) {
	int** matrix = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++) {
		matrix[i] = (int*)calloc(size, sizeof(int));
	}
	return matrix;
}
int   main(void)
{
	int  i, j,*p, sum = 0, sum1 = 0;
	int n, m ;
	printf("Kol-vo strok: ");
	scanf_s("%d", &n);
	printf("Kol-vo stolbcov: ");
	scanf_s("%d", &m);
	int** matrix = createMatrix(n);
	

	for (i = 0; i < n; i++)  
	{
		for (j = 0; j<m; j++) 
		{
			matrix[i][j] = rand()%100 ;
		}
	}



	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			
			sum = sum + matrix[i][j];



		} 

	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			
			sum1 = sum1 + matrix[i][j] ;



		}

	}



	printf_s("Sum 1 = %d , Sum 2 = %d", sum, sum1);

	return 0;
	system("pause");
}
