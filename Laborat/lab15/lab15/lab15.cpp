#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h> 
#include <string.h> 
struct Student
{
	char lastName[30];
	char group[10];
};


void makeMassAndPrint(Student students[], int N, char group[10], char c)
{

	int k = 0;

	for (int i = 0; i < N; i++)
	{

		if ((strcmp(students[i].group, group) == 0) && (students[i].lastName[0] == c))
			k++;
	}


	char** lastNames = (char**)malloc(k * sizeof(char*));

	k = 0;


	for (int i = 0; i < N; i++)
	{
		if ((strcmp(students[i].group, group) == 0) && (students[i].lastName[0] == c))
			lastNames[k++] = students[i].lastName;
	}


	for (int i = 0; i < k; i++)
		printf("There a few matches :%s\n", lastNames[i]);


	free(lastNames);
}

int main()
{

	Student students[6] = {
		"Sidorov", "VV-4",
		"Abdurob", "VV-4",
		"Indastan", "VV-4",
		"Gavrilin", "VV-4",
		"Chehov", "VV-4",
		"Isaev", "VV-4" };


	char group[10];

	printf("Put group number : \n");
	gets_s(group);

	printf("Put lastname here : \n ");
	char c = getchar();

	makeMassAndPrint(students, 6, group, c);
}
