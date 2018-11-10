#include<stdio.h>

int main()
{
	int arr[5];
	for(int i = 0; i <= 5; i = i + 1)
	{
		printf("nhap phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	int *ptr;
	ptr = &arr;
	printf("%d", ptr);
	return 0;
}
