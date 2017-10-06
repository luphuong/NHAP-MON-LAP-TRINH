#include<stdio.h>
void nhap(int &n);
void sodautien(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
    sodautien(n);
}
void xuat(int kq)
{
	printf("%d ",kq);
}
void sodautien(int n)
{
		if(n==1)
	{
		xuat(0);
	}
		else
			if(n==2)
		{
			xuat(0);
			xuat(1);
		}
			else
		{
		xuat(0);
		xuat(1);
		xuat(1);
		int s=0,A1=1,A2=1;
		for(int i=3;i<n;i++)
		{
			s=A1+A2;
			A1=A2;
			A2=s;
			xuat(s);
		}
	}
}
void nhap(int &n)
{
	scanf("%d",&n);
}