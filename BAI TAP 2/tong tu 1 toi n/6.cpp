#include<stdio.h>
void nhap(int &n);
int tong(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=tong(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int tong(int n)
{
	int s=0;
	if(n==0)
		return s;
	else
	{
		for(int i=1;i<=n;i++)
			s+=i;
		return s;
	}
	
}
void nhap(int &n)
{
	scanf("%d",&n);
}