#include<stdio.h>
#include<math.h>
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
		printf("so chinh phuong");
	else
		printf("khong phai so chinh phuong");
}
int kiemtra(int a)
{
	int k=(int)sqrt(a);
	if(k*k==a)
		return 1;
	else
		return 0;
}
void nhap(int &a)
{
	scanf("%d",&a);
}