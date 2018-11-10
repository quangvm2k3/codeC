#include <stdio.h>

int main()
{
  int n;
  printf("nhap so phan tu trong mang : ");
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i <= n; i = i + 1)
  {
  	printf("nhap phan tu thu %d : ", i + 1);
  	scanf("%d", &a[i]);
  }
  for(int k = 0; k <= n; k = k + 1)
  {
  	 a[5] = a[5];
  }
  printf("%d", a[5]);
}
