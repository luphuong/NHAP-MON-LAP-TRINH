#include<stdio.h>
#include<math.h>
void nhap(int &n);
int kiemtra(int k);
void xuat(int kq);
void main()
{
	int n;
	int dem=0;
	nhap(n);
	for(int i=0;i<n;)
	{
		int kq=kiemtra(i);
		if(kq==1)
		{
			dem++;
			i++;
		}
		else
			i++;
	}
	xuat(dem);
}
void xuat(int kq)
{
	printf("%d ",kq);
}
int kiemtra(int k)
{
	int a=int(sqrt(k));
	if(a*a==k)
		return 1;
	else
		return 0;
}
void nhap(int &n)
{
	scanf("%d",&n);
}