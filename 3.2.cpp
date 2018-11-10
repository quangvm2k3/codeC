
/**/
#include<stdio.h>

int main()
{
	int a, b , i , m ;
	printf("Nhap 0 de mo menu");
	printf("\nNhap lua chon :");
	scanf("%d", &m);
	switch(m)
	{
		case(0):
			{
				printf("Menu");
				printf("\n1=Nhat ky cuoc goi \n2=Danh ba \n3=Radio \n4=Tin nhan");
				printf("\nNhap lua chon: ");
				scanf("%d", &i);
				switch(i)
				{
					case(1):
					{
						printf("\nNhat ki cuoc goi \n1=Cuoc goi bi nho \n2=Cuoc goi vua nhan \n3=Cac so vua goi \n4=Xoa cac cuoc goi gan day \n5=Thoi luong cuoc goi");
						printf("\nNhap lua chon: ");
						scanf("%d", &a);
						switch(a)
						{
							case(1):
							{
								printf("\nCuoc goi bi nho \nkhong co");
								break;
							}
							case(2):
							{
								printf("\nCuoc goi vua nhan \nkhong co");
								break;
							}
							case(3):
							{
								printf("\nCac so vua goi \nkhong co");
								break;
							}
							case(4):
							{
								printf("\nXoa cac cuoc goi gan day \nkhong co");
								break;	
							}
							case(5):
							{
								printf("\nThoi luong cuoc goi \nkhong co");
								break;	
							}	
						}
			    	break;
					}
				}
			}
		
	}
	
	return 0;
	
}
