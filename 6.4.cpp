#include <stdio.h>

int main()
{
	int n;
	printf("nhap so can dem: ");
	scanf("%d", &n);
	printf("\n");
	float arr[10];
	for(int i = 0; i <= 10; i = i + 1)
	{
		printf("nhap phan tu thu %d: ", i + 1);
		scanf("%f", &arr[i]);
	}
	int lan = 0;
	for (int j = 0; j <= 10; j = j + 1)
	{
		if(arr[j] == n)
		{
			lan =  lan + 1;
		}
	}
	printf("%d", lan);
	return 0;
}
