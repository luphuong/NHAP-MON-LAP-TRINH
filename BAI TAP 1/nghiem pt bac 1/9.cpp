#include<stdio.h>
void nhap(int &a,int &b);
int nghiem(int a,int b,float &x);
void xuat(int kq,float x);
void main()
{
	int a,b;
	float x;
	nhap(a,b);
	int kq=nghiem(a,b,x);
	xuat(kq,x);
}
void xuat(int kq,float x)
{
	if(kq==2)
		printf("vo so nghiem");
	else
		if(kq==-1)
			printf("vo nghiem");
		else
			printf("%.2f",x);
}
int nghiem(int a,int b,float &x)
{
	if(a==0)
		if(b==0)
			return 2;
		else
			return -1;
	else
	{
		x=float(-b)/a;
		return 1;
	}
}
void nhap(int &a,int &b)
{
	scanf("%d",&a);
	scanf("%d",&b);
}