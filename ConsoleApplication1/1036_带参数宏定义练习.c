#include <stdio.h>

#define SWAP(a,b) do{\
int temp;\
temp = a;\
a = b;\
b = temp;\
}while(0)

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	SWAP(x,y);
	printf("%d %d\n",x,y);

	return 0;
}
