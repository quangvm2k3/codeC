#include <stdio.h>

int main()
{
	int m;
	int n = 36;
	printf("nhap so luong hoc sinh: ");
	scanf("%d", &m);
	int a[m][n];
	for (int i = 0; i < m; i = i + 1)
	{
		char a[i][j];
		printf("nhap ho ten hoc sinh ID: %d: ", i + 1);
		a[i][j] = getchar();
		for(int j = 0; j < n; j = j + 1)
		{
			printf("nhap tuoi hoc sinh ID: %d: ", j + 1);
		}
	}
	return 0;
}
