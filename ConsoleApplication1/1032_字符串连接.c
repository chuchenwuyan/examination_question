#include <stdio.h>
#include <string.h>

void CatString(char str1[], char str2[]);

int main()
{
	//×¼±¸×Ö·û´®
	char str1[100] = {0};	//×Ö·û´®³õÊ¼»¯
	char str2[100] = {0};

	//¼üÅÌÂ¼Èë×Ö·û´®
	while (scanf("%[^\n]", str1) != EOF)
	{
		getchar();
		scanf("%[^\n]", str2);
		getchar();
		CatString(str1, str2);
		printf("%s\n",str1);
	}
	return 0;
}
void CatString(char str1[],char str2[])
{
	strcat(str1, str2);
}