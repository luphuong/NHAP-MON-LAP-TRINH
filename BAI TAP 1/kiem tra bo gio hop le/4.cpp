#include<stdio.h>
void nhap(int &h,int &m,int &s);
int kiemtra(int h,int n,int s);
void xuat(int kq);
void main()
{
	int h,m,s;
	nhap(h,m,s);
	int kq=kiemtra(h,m,s);
	xuat(kq);
}
void xuat(int kq)
{
	if(kq==1)
		printf("hop le");
	else
		printf("khong hop le");
}
int kiemtra(int h,int m,int s)
{
	if(h>=0 && h<24)
		if(m>=0 && m<60)
			if(s>=0 && s<60)
				return 1;
			else
				return 0;
		else
			return 0;
	else
		return 0;
}
void nhap(int &h,int &m,int &s)
{
	scanf("%d",&h);
	scanf("%d",&m);
	scanf("%d",&s);
}