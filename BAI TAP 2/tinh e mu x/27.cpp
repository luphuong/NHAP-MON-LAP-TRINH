#include<stdio.h>
#include<math.h>
void nhap(int &x,int &n);
float tinh(int x,int n);
void xuat(float kq);
void main()
{
	int x,n;
	nhap(x,n);
	float kq=tinh(x,n);
	xuat(kq);
}
void xuat(float kq)
{
	printf("%f ",kq);
}
float tinh(int x,int n)
{
	int k=1;
	float s=1;
	for(int i=1;i<=n;i++)
	{
		k=k*i;
		s=s+float((pow(x,i)))/k;
	}
	return s;
}
void nhap(int &x,int &n)
{
	scanf("%d",&x);
	scanf("%d",&n);
}