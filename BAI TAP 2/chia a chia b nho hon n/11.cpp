#include<stdio.h>
void nhap(int &a,int &b,int &n);
int tongnguyenduong(int a,int b,int n);
void xuat(int kq);
void main()
{
	int a,b,n;
	nhap(a,b,n);
	int kq=tongnguyenduong(a,b,n);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int tongnguyenduong(int a,int b,int n)
{
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(i%a==0 && i%b!=0)
			s+=i;
	}
	return s;
}
void nhap(int &a,int &b,int &n)
{
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&n);
}