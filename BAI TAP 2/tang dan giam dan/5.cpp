#include<stdio.h>
void nhap(int &n);
int tanggiam(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=tanggiam(n);
	xuat(kq);
}
void xuat(int kq)
{
		if(kq==1)
			printf("tang dan");
		else
			if(kq==2)
				printf("giam dan");
			else
				printf("khong tang khong giam");
}
int tanggiam(int n)
{
	int dem=0,k=n,a,b;
	int max=-1,min=10;
	int dem1=0,dem2=0;
	while(n>0)
	{
		a=n%10;
		n=n/10;
		dem++;
	}
	while(k>0)
	{
		b=k%10;
		k=k/10;
		if(b<min)
		{
			min=b;
			dem1++;
		}
		if(b>max)
		{
			max=b;
			dem2++;
		}
	}
	if(dem1==dem)
		return 1;
	else
		if(dem2==dem)
			return 2;
		else
			return 0;
}
void nhap(int &n)
{
	scanf("%d",&n);
}