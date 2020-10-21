#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int   main(void)
{
	int temp, n = 10, i = 10;

	int RandomMassive[10] = {};
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		RandomMassive[i] = rand();

	}
	i = 0;
	while (i < n)
		printf("  %d ", RandomMassive[i++]);


	return 0;

	_getch;
}
