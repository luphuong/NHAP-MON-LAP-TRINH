#include<stdio.h>
void nhap(int &n);
int nhuan(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=nhuan(n);
	xuat(kq);
}
void xuat(int kq)
{
	if(kq==1)
		printf("la nam nhuan");
	else
		printf("khong phai nam nhuan");
}
int nhuan(int n)
{
	if((n%4==0 && n%100!=0) || n%400==0)
		return 1;
	else
		return 0;
}
void nhap(int &n)
{
	scanf("%d",&n);
}