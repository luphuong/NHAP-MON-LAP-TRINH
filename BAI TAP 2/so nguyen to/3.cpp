#include<stdio.h>
void nhap(int &a);
int kiemtra(int a);
void xuat(int kq);
void main()
{
	int a;
	nhap(a);
	int kq=kiemtra(a);
	xuat(kq);
}
void xuat(int kq)
{
	if(kq==1)
		printf("la so nguyen to");
	else
		printf("khong phai so nguyen to");
}
int kiemtra(int a)
{
	int dem=0;
	for(int i=1;i<=a;i++)
		if(a%i==0)
			dem++;
	if(dem==2)
		return 1;
	else
		return 0;
}
void nhap(int &a)
{
	scanf("%d",&a);
}