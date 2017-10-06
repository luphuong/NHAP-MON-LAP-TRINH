#include<stdio.h>
void nhap(int &n);
int giaithua(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=giaithua(n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int giaithua(int n)
{
	int t=1;
	for(int i=1;i<=n;i++)
		t=t*i;
	return t;
}
void nhap(int &n)
{
	scanf("%d",&n);
}