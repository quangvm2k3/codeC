/*tro choi oan tu ti
bua =1 , keo =2 giay= 3*/
#include <stdio.h>

int main()
{
	int a , b ;
	printf("Quy tac : bua = 1 , keo = 2 , giay = 3");
	printf("\nnguoi choi mot : ");
	scanf("%d", &a);
	printf("nguoi choi hai : ");
	scanf("%d", &b);
	switch(a)
	{
		/*p1 : bua*/
		case(1):  	
		{
			switch(b)
			{
				/*p2 : bua*/
				case(1):
				{
					printf("hoa");
					break;
				}
				/*p2 : keo*/
				case(2):
				{
					printf("nguoi choi mot thang");
					break;
				}
				/*p2 : giay*/
				case(3):
				{
					printf("nguoi choi hai thang");
					break;
				}	
			}
		break;
		}	
		/*p1 : keo*/
		case(2):
		{
				switch(b)
			{
				/*p2 : bua*/
				case(1):
				{
					printf("nguoi choi hai thang");
					break;
				}
				/*p2 : keo*/
				case(2):
				{
					printf("hoa");
					break;
				}
				/*p2 : giay*/
				case(3):
				{
					printf("nguoi choi mot thang");
					break;
				}		
			}
		break;
	    }
		/*p1 : giay*/
		case(3):
		{
				switch(b)
			{
				/*p2 : bua*/
				case(1):
				{
					printf("nguoi choi mot thang");
					break;
				}
				/*p2 : keo*/
				case(2):
				{
					printf("nguoi choi hai thang");
					break;
				}
				/*p2 : giay*/
				case(3):
				{
					printf("hoa");
					break;
				}		
			}
	    break;
		}
	}
	return 0;
}
