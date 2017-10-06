#include<stdio.h>
void nhap(int &a,int &b);
int max(int a,int b);
void xuat(int kq);
void main()
{
	int a,b;
	nhap(a,b);
	int kq=max(a,b);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int max(int a,int b)
{
	int t;
	if(a>b)
		t=a;
	else
		t=b;
	return t;
}
void nhap(int &a,int &b)
{
	scanf("%d",&a);
	scanf("%d",&b);
}