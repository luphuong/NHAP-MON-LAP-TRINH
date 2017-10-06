#include<stdio.h>
void nhap(int &a,int &b,int &c);
int min(int a,int b,int c);
void xuat(int kq);
void main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=min(a,b,c);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int min(int a,int b,int c)
{
	int t;
	if(a<b)
		if(a<c)
			t=a;
		else
			t=c;
	else
		if(b<c)
			t=b;
		else
			t=c;
	return t;
}
void nhap(int &a,int &b,int &c)
{
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
}