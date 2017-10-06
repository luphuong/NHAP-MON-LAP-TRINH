#include<stdio.h>
int kiemtra(int n);
void nhap(int &n);
void xuat(int kq);
int lasnt(int k);
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
int lasnt(int k)
{
	int dem=0;
	for(int i=1;i<=k;i++)
	{
		if(k%i==0)
			dem++;
	}
	if(dem==2)
		return 1;
	else
		return 0;
}
int kiemtra(int n)
{
	int k;
	int dem=0;
	while(n>0)
	{
		k=n%10;
		if(lasnt(k))
			dem++;
		n=n/10;
	}
	return dem;
}
void nhap(int &n)
{
	scanf("%d",&n);
}