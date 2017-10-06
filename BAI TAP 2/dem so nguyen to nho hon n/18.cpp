#include<stdio.h>
void nhap(int &n);
int kiemtra(int k);
void xuat(int kq);
void main()
{
	int n;
	int dem=0;
	nhap(n);
	for(int i=1;i<n;)
	{
		int kq=kiemtra(i);
		if(kq==1)
		{
			dem++;
			i++;
		}
		else
			i++;
	}
	xuat(dem);
}
void xuat(int kq)
{
	printf("%d ",kq);
}
int kiemtra(int k)
{
	int dem=0;
	for(int i=1;i<=k;)
	{
		if(k%i==0)
		{
			dem++;
			i++;
		}
		else
			i++;
	}
	if(dem==2)
		return 1;
	else
		return 0;
}
void nhap(int &n)
{
	scanf("%d",&n);
}