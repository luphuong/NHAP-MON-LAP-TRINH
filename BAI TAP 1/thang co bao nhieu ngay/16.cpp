#include<stdio.h>
void nhap(int &m,int &y);
int ngay(int m,int y);
void xuat(int kq);
int lanamnhuan(int y);
void main()
{
	int m,y;;
	nhap(m,y);
	int kq=ngay(m,y);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int lanamnhuan(int y)
{
	if((y%4==0 && y%100!=0) || y%400==0)
		return 1;
	else
		return 0;
}
int ngay(int m,int y)
{
	switch(m)
	{
	case 2:	
		if(lanamnhuan(y))
		{
			return 29;
			break;
		}
		 else
		 {
			return 28;
			break;
		 }
	case 4:case 6:case 9:case 11:return 30;break;
	default :return 31;break;
	}
}
void nhap(int &m,int &y)
{
	scanf("%d",&m);
	scanf("%d",&y);
}