#include<stdio.h>
void nhap(int &n);
int songuoc(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=songuoc(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int songuoc(int n)
{
	int s=0;
	while(n>0)
	{
		s=s*10+n%10;
		n=n/10;
	}
	return s;
}
void nhap(int &n)
{
	scanf("%d",&n);
}