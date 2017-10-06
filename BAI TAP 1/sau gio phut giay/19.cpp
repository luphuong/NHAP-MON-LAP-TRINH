#include<stdio.h>
void nhap(int &h,int &m,int &s);
void xuat(int h,int m,int s);
void main()
{
	int h,m,s;
	nhap(h,m,s);
	xuat(h,m,s);
}
void xuat(int h,int m,int s)
{
	int k=1;
	if(s+k<60)
		s+=k;
	else
	{
		s=s+k-60;
		m++;
		if(m>=60)
	{
		m=m-60;
		h++;
		if(h>=24)
			h=h-24;
	}
	}
	printf("%.2d:%.2d:%.2d",h,m,s);
}
void nhap(int &h,int &m,int &s)
{
	scanf("%d",&h);
	scanf("%d",&m);
	scanf("%d",&s);
}