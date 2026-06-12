#include <stdio.h>
#include <string.h>

void StrCopy(char str1[], char str2[]);

int main()
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	while (scanf("%[^\n]", str1) != EOF)
	{
		getchar();
		StrCopy(str1, str2);
		printf("%s\n", str2);
	}
	return 0;
}
void StrCopy(char str1[], char str2[])
{
	int j = 0;
	for (int i  = 0;str1[i] != '\0'; i++)
	{
		if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';
}