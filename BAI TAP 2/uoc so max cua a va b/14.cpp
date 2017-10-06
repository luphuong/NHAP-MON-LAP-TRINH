#include<stdio.h>
void nhap(int &a,int &b);
int uocmax(int a,int b);
void xuat(int kq);
void main()
{
	int a,b;
	nhap(a,b);
	int kq=uocmax(a,b);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int uocmax(int a,int b)
{
	if(a>b)
	{
		int max=0;
		for(int i=1;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
				max=i;
		}
		return max;
	}
	else
	{
		int max=0;
		for(int i=1;i<=a;i++)
		{
			if(a%i==0 && b%i==0)
				max=i;
		}
		return max;
	}
}
void nhap(int &a,int &b)
{
	scanf("%d",&a);
	scanf("%d",&b);
}