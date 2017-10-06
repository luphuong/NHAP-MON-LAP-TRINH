#include<stdio.h>
void nhap(float &a);
int songuyen(float a);
void xuat(int kq);
void main()
{
	float a;
	nhap(a);
	int kq=songuyen(a);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int songuyen(float a)
{
	int b;
	float t=a-int(a);
	if(t>0)
		b=int(a);
	else
		b=int(a)-1;
	return b;
}
void nhap(float &a)
{
	scanf("%f",&a);
}