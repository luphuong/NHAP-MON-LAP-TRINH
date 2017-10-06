#include<stdio.h>
void nhap(int &n);
void phantich(int n);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	phantich(n);
}
void xuat(int n)
{
	printf("%d ",n);
}
void phantich(int n)
{
	for(int i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			if(n==i)
				xuat(i);
			else
				xuat(i);
			n=n/i;
		}
	}
}
void nhap(int &n)
{
	scanf("%d",&n);
}