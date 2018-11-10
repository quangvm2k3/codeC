#include <stdio.h>

int main()
{
	float arr[20];
	for(int i = 0; i <= 20; i = i + 1)
	{
		printf("moi ban nhap phan tu o gia tri %d: ", i + 1);
		scanf("%f", &arr[i]);
	}
	for(int j = 0; j <= 20; j = j + 1)
	{
		if(arr[j] < 0)
		{
			printf("\n%f", arr[j]);
		}
	}
	return 0;
}
