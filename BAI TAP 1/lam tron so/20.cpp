#include<stdio.h>
void nhap(float &n);
int lamtron(float n);
void xuat(int kq);
void main()
{
	float n;
	nhap(n);
	int kq=lamtron(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int lamtron(float n)
{
	int b;
	float k=n-int(n);
	if(k>=0.5)
		b=int(n+1);
	else
		b=int(n);
	return b;
}
void nhap(float &n)
{
	scanf("%f",&n);
}