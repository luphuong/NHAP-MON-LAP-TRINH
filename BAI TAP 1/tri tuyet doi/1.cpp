#include<stdio.h>
#include<math.h>
void nhap(int &n);
int kiemtra(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=kiemtra(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int kiemtra(int n)
{
	if(n<0)
		return -n;
	else
		return n;
}
void nhap(int &n)
{
	scanf("%d",&n);
}