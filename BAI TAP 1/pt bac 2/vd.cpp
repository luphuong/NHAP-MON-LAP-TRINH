#include<stdio.h>
#include<math.h>
void nhap(int &a,int &b,int &c);
float nghiem(int a,int b,int c,float &x1,float &x2);
void xuat(float kq,float x1,float x2);
void main()
{
	int a,b,c;
	float x1,x2;
	nhap(a,b,c);
	float kq=nghiem(a,b,c,x1,x2);
	xuat(kq,x1,x2);
}
void xuat(float kq,float x1,float x2)
{
	if(kq==0)
		printf("vo nghiem");
	else
		if(kq==1)
			printf("%f",x1);
		else
			if(kq==2)
				printf("%f %f",x1,x2);
			else
				printf("vo so nghiem");
}
float nghiem(int a,int b,int c,float &x1,float &x2)
{
	if(a==0)
		if(b==0)
			if(c==0)
				return 3;
			else
				return 0;
		else
		{
			 x1=float(-c)/b;
			return 1;
		}
	else
	{
		float k=float(b*b-4*a*c);
		if(k<0)
			return 0;
		else
			if(k==0)
			{
				x1=float(-b)/(2*a);
				return 1;
			}
			else
			{
				x1=float(((-b+sqrt(k)))/(2*a));
				x2=float(((-b-sqrt(k)))/(2*a));
				return 2;
			}
	}
}
void nhap(int &a,int &b,int &c)
{
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
}