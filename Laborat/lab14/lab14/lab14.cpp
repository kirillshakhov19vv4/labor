#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int   main(void)
{
	int  i, j, sum = 0, sum1 = 0;

	int A[2][2] = { { 2, 5 },{4, 1} };

	for (j = 0; j < 1; j++)
	{
		for (i = 0; i < 2; i++)
		{
			sum = sum + A[i][j];



		}

	}
	for (j = 1; j < 2; j++)
	{
		for (i = 0; i < 2; i++)
		{
			sum1 = sum1 + A[i][j];



		}

	}


	printf_s("Sum 1 = %d , Sum 2 = %d", sum, sum1);

	return 0;
	system("pause");
}

