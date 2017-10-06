#include<stdio.h>
void nhap(int &n);
float tong(int n);
void xuat(float kq);
void main()
{
	int n;
	nhap(n);
	float kq=tong(n);
	xuat(kq);
}
void xuat(float kq)
{
	printf("%f",kq);
}
float tong(int n)
{
	float s=0;
		for(int i=1;i<=n;i++)
			s+=float(1)/i;
		return s;
	
}
void nhap(int &n)
{
	scanf("%d",&n);
}