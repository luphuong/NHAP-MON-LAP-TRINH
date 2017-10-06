#include<stdio.h>
void nhap(int &n);
int doixung(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	int kq=doixung(n);
	xuat(kq);
}
void xuat(int kq)
{
	if(kq==1)
		printf("doi xung");
	else
		printf("khong doi xung");
}
int doixung(int n)
{
	int k=0;
	int t=n;
	while(n>0)
	{
		k=k*10+n%10;
		n=n/10;
	}
	if(k==t)
		return 1;
	else
		return 0;
}
void nhap(int &n)
{
	scanf("%d",&n);
}