#include<stdio.h>
void nhap(int &a);
int max(int a);
int min(int a);
void xuat(int kq);
void main()
{
	int a,kq;
	nhap(a);
//	int k=a;
    kq=max(a);
    xuat(kq);
    kq=min(a);
 	xuat(kq);
}
void xuat(int kq)
{
	printf("%d\n",kq);
}
int min(int a)
{
	int k,m=10;
	while(a>0)
	{
		k=a%10;
		a=a/10;
		if(k<m)
			m=k;
	}
	return m;
}
int max(int a)
{
	int k,m=-1;
	while(a>0)
	{
		k=a%10;
		a=a/10;
		if(k>m)
			m=k;
	}
	return m;
}
void nhap(int &a)
{
	scanf("%d",&a);
}