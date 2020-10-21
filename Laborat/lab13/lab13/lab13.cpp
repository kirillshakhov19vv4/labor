#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int   main(void)
{
	int  i = 10, n = 10, temp;

	int RandomMassive[10] = {};
	temp = RandomMassive[i];
	for (i = 0; i < n; i++)
	{

		printf_s("Enter your digit = ", temp);
		scanf_s("%d", &temp);
	}

	return 0;
	system("pause");
}
