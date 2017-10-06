#include<stdio.h>
int tinhtien(float x);
void xuat(int kq);
void main()
{
	float x;
	scanf("%f",&x);
	int kq=tinhtien(x);
	xuat(kq);
}
int tinhtien(float x)
{
    int t;
	if(x<=0.7)
		t=12500;
	else 
	{
		if(x>0.7 && x<=30.7)
		{
		int k=int(x-0.7+0.99);
			t=12500+k*17000;
		}
	    else
		{
			int k=int(x-30.7+0.99);
			t=12500+30*17000+k*14000;
		}
	}
    return t;
}
void xuat(int kq)
{

printf("%d",kq);

}

