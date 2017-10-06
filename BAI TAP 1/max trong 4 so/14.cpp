#include<stdio.h>
void nhap(float &a,float &b,float &c,float &d);
float max(float a,float b,float c,float d);
void xuat(float kq);
float kiemtra2so(float a,float b);
void main()
{
	float a,b,c,d;
	nhap(a,b,c,d);
	float kq=max(a,b,c,d);
	xuat(kq);
}
void xuat(float kq)
{
	printf("%.2f",kq);
}
float kiemtra2so(float a,float b)
{
	if(a>b)
		return a;
	else
		return b;
}
float max(float a,float b,float c,float d)
{
	float m1=kiemtra2so(a,b);
	float m2=kiemtra2so(c,d);
	float m=kiemtra2so(m1,m2);
	return m;
}
void nhap(float &a,float &b,float &c,float &d)
{
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
}