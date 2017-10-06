#include<stdio.h>
void nhap(int &n);
int kiemtra(int k);
void xuat(int kq);
void main()
{
	int n;
	nhap(n);
	for(int i=1;i<n;)
	{
		int kq=kiemtra(i);
		if(kq==1)
		{
			xuat(i);
			i++;
		}
		else
			i++;
	}
}
void xuat(int kq)
{
	printf("%7d  ",kq);
}
int kiemtra(int k)
{
	int s=0;
	for(int i=1;i<k;)
	{
		if(k%i==0)
		{
			s+=i;
			i++;
		}
		else
			i++;
	}
	if(s==k)
		return 1;
	else
		return 0;
}
void nhap(int &n)
{
	scanf("%d",&n);
}