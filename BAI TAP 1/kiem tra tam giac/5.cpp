#include<stdio.h>
void nhap(float &a,float &b,float &c);
int kiemtratamgiac(float a,float b,float c);
void xuat(int kq);
void main()
{
	float a,b,c;
	nhap(a,b,c);
	int kq=kiemtratamgiac(a,b,c);
	xuat(kq);
}
void xuat(int kq)
{
	if(kq==1)
		printf("la do dai 3 canh cua tam giac");
	else
		printf("khong la do dai 3 canh cua tam giac");
}
int kiemtratamgiac(float a,float b,float c)
{
	if(a+b>c && a+c>b && b+c>a)
		return 1;
	else
		return 0;
}
void nhap(float &a,float &b,float &c)
{
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
}