#include <stdio.h>

int main()
{
	for(int i = 0; i <= 255; i = i + 1)
	{
		printf("%d.%c\n\n", i, i);
	}
	return 0;
}
