#include<stdio.h>
void nhap(int &a,int &b,int &c);
int nhi(int a,int b,int c);
void xuat(int kq);
void main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=nhi(a,b,c);
	xuat(kq);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int nhi(int a,int b,int c)
{
	if(a>b)
		if(a<c)
			return a;
		else
			if(b>c)
				return b;
			else
				return c;
	else
		if(b<c)
			return b;
		else
			if(a>c)
				return a;
			else
				return c;

}
void nhap(int &a,int &b,int &c)
{
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
}