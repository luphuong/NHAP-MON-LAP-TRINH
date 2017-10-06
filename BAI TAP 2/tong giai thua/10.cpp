#include<stdio.h>
void nhap(int &n);
long tong(int n);
void xuat(long kq);
void main()
{
	int n;
	nhap(n);
	long kq=tong(n);
	xuat(kq);
}
void xuat(long kq)
{
	printf("%d",kq);
}
long tong(int n)
{
	int s=0,h=1;
	for(int i=1;i<=n;i++)
	{
		h=h*i;
		s=s+h;
	}
	return s;
}
void nhap(int &n)
{
	scanf("%d",&n);
}