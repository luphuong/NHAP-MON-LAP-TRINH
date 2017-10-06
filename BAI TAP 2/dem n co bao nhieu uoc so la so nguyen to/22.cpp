#include<stdio.h>
void nhap(int &n);
int kiemtra(int n);
void xuat(int kq);
int lasnn(int k);
void main()
{
	int n;
	nhap(n);
	int kq=kiemtra(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d ",kq);
}
int lasnn(int k)
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
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			if(lasnn(i)==1)
				dem++;
	}
	return dem;
}
void nhap(int &n)
{
	scanf("%d",&n);
}