#include<stdio.h>
void nhap(int &a,int &b);
int tinh(int a,int b);
void xuat(int a,int b,int kq);
void main()
{
	int a,b;
	nhap(a,b);
	int kq=tinh(a,b);
	xuat(a,b,kq);
}
void xuat(int a,int b,int kq)
{
	if(kq==0)
		printf("vo nghiem");
	else
		if(kq==1)
		{
			float k=float(-b)/a;
			printf("%.2f",k);
		}
		else
		{
			printf("vo so nghiem");
		}
}
int tinh(int a,int b)
{
	if(a==0)
		if(b==0)
			return 2;
		else
			return 0;
	else
	{
		return 1;
	}
}
void nhap(int &a,int &b)
{
	scanf("%d",&a);
	scanf("%d",&b);
}