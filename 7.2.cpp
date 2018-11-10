#include <stdio.h>

int main()
{
	char arr[42];
	for(int i = 0; i <= 42; i = i + 1)
	{
		printf("nhap ten: ");
		char a = getchar();
		arr[i] = a;
	}
	for(int j = 0; j <= 42; j = j + 1)
	{
		
	}
	for(int k = 0; k <= 42; k = k + 1)
	{
		printf("%c", arr[k]);
	}
	return 0;
}
