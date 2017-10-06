#include<stdio.h>
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
	if(kq==1)
		printf("toan chan");
	else
		printf("co so bi le");
}
int kiemtra(int n)
{
	int k;
	int dem=0,d=0;
	while(n>0)
	{
		k=n%10;
		if(k%2==0)
			dem++;
		n=n/10;
		d++;
	}
	if(dem==d)
		return 1;
	else
		return 0;
}
void nhap(int &n)
{
	scanf("%d",&n);
}