#include <stdio.h>

void CountChar(char str[], int* letters, int* digits, int* spaces, int* others);

int main()
{
	char str[100] = {0};
	while (scanf("%[^\n]", str) != EOF)
	{
		getchar();
		int letters = 0, numbers = 0, spaces = 0, others = 0;
		CountChar(str, &letters, &numbers, &spaces, &others);
		printf("%d %d %d %d\n", letters, numbers, spaces, others);
	}
	return 0;
}
void CountChar(char str[], int* letters, int* digits, int* spaces, int* others)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			(*letters)++;
		}
		//Êı×Ö¼ÆÊı
		else if(str[i] >= '0' && str[i] <= '9')
		{
			(*digits)++;
		}
		else if (str[i] == ' ')
		{
			(*spaces)++;
		}
		else
		{
			(*others)++;
		}
	}
}