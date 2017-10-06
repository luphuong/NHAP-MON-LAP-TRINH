#include<stdio.h>
int kiemtra(int i);
void xuat(int i);
void main()
{
	int i;
	for(i=10;i<=99;)
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
void xuat(int i)
{
	printf("%d  ",i);
}
int kiemtra(int i)
{
	int t=1,s=0;
	int k=i;
	while(i>0)
	{
		t=t*(i%10);
		s=s+(i%10);
		i=i/10;
	}
	if(t==(s+s))
		return 1;
	else
		return 0;
}
