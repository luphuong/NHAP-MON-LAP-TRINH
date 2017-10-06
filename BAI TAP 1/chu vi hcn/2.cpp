#include<stdio.h>
void nhap(float &a,float &b);
float tinhcv(float a,float b);
void xuat(float kq);
void main()
{
	float a,b;
	nhap(a,b);
	float kq=tinhcv(a,b);
	xuat(kq);
}
void xuat(float kq)
{
	printf("%.2f",kq);
}
float tinhcv(float a,float b)
{
	float t=(float)(a+b)*2;
	return t;
}
void nhap(float &a,float &b)
{
	scanf("%f",&a);
	scanf("%f",&b);
}