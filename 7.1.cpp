#include <stdio.h>

int main()
{
	int arr[42];
	for(int i = 0; i <= 42; i = i + 1)
	{
		printf("nhap so thu %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	for(int k = 0; k <= 42; k = k + 1)
	{
		printf("\n%d", arr[k]);
	}
	return 0;
}
