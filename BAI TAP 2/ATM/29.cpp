#include<stdio.h>
void nhap(int &n);
void tinh(int n);
void xuat(int n,int x);
int sotien(int &n,int k);
void main()
{
	int n;
	nhap(n);
    tinh(n);
}
void xuat(int n,int x)
{
	printf("%d : ",n);
	printf("%d\n",x);
}
void tinh(int n)
{
	int st;
    st=sotien(n,100000);
	xuat(100000,st);
    st=sotien(n,50000);
	xuat(50000,st);
    st=sotien(n,20000);
	xuat(20000,st);
    st=sotien(n,10000);
	xuat(10000,st);
}
int sotien(int &n,int k)
{
	int dem=0;
	while(n>=k)
	{
		n=n-k;
		dem++;
	}
	return dem;
}
void nhap(int &n)
{
	do{
	scanf("%d",&n);
	}while(n%10000!=0);
}