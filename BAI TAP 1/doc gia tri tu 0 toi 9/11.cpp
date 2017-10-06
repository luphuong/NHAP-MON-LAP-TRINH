#include<stdio.h>
void nhap(int &n);
void xuat(int n);
void main()
{
	int n;
	nhap(n);
	xuat(n);
}
void xuat(int n)
{
	switch(n)
	{
	case 0:printf("khong");break;
	case 1:printf("mot");break;
	case 2:printf("hai");break;
	case 3:printf("ba");break;
	case 4:printf("bon");break;
	case 5:printf("nam");break;
	case 6:printf("sau");break;
	case 7:printf("bay");break;
	case 8:printf("tam");break;
	case 9:printf("chin");break;
	default:printf("khong doc duoc");break;
	}

}
void nhap(int &n)
{
	scanf("%d",&n);
}