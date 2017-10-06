#include<stdio.h>
void nhap(int &n);
int uslmax(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=uslmax(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d ",kq);
}
int uslmax(int n)
{
	int max=-1;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0 && i%2!=0)
			if(i>max)
				max=i;
	}
	return max;
}
void nhap(int &n)
{
	scanf("%d",&n);
}