#include<stdio.h>
void nhap(int &a,int &b);
float thuong(int a,int b,float &x);
void xuat(float kq,float x);
void main()
{
	int a,b;
	float x;
	nhap(a,b);
	float kq=thuong(a,b,x);
	xuat(kq,x);
}
void xuat(float kq,float x)
{
	if(kq==1)
		printf("%f",x);
	else
		printf("khong chia duoc");
}
float thuong(int a,int b,float &x)
{
	if(b!=0)
	{
		x=float(a)/b;
		return 1;
	}
	else
		return 0;
}
void nhap(int &a,int &b)
{
	scanf("%d",&a);
	scanf("%d",&b);
}