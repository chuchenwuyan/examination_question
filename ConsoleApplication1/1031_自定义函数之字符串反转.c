#include <stdio.h>
#include <string.h>

void reverseString(char arr[]);

int main()
{
	char str[100001] = { 0 };
	while (scanf("%[^\n]",str) != EOF)
	{
		getchar();
		reverseString(str);
		printf("%s",str);
	}
	return 0;
}
void reverseString(char arr[])
{
	int len = strlen(arr);	//len为总长
	int left = 0;
	int right = len - 1;	//\0前一个字符的索引
	char temp;
	while (left < right)	
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}