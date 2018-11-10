#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1;
	while(i == 1)
	{
		int x, y;
		printf("nhap x: ");
		scanf("%d", &x);
		printf("nhap y: ");
		scanf("%d", &y);
		int z;
		z = x + y;
		printf("KQ = %d\n\n", z);
		system("cls");	
	}
	return 0;
}
