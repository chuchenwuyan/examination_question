#include <stdio.h>

void Digitalseparation(char str1[], char str2[]);

int main()
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	while (scanf("%s", str1) != EOF)
	{
		Digitalseparation(str1, str2);
		printf("%s\n", str2);
	}
	return 0;
}
void Digitalseparation(char str1[],char str2[])
{
	int j = 0;
	for (int i = 0; i < 4; i++)
	{
		str2[j] = str1[i];
		j++;
		if (i != 3)
		{
			str2[j] = ' ';
			j++;
		}
	}
	str2[j] = '\0';
}