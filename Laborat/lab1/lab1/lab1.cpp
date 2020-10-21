#include <stdio.h>
#include <conio.h>

int   main(void)
{
	int temp, n = 10, i = 0, min = 0, max = 0, razn = 0;

	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (i = 0; i < 10; i++)
	{
		temp = a[i];
		if (a[i] > max)
			max = a[i];
	}

	for (i = 0; i < 10; i++)
	{
		temp = a[i];
		if (a[i] < min)
			min = a[i];
	}
	razn = max - min;
	printf("  %d", razn);
	_getch;
}



