#include<stdio.h>
void nhap(float &a,float &b,float &c);
int tamgiac(float a,float b,float c);
void xuat(int kq);
int latamgiac(float a,float b,float c);
void main()
{
	float a,b,c;
	int kq;
	nhap(a,b,c);
	if(latamgiac(a,b,c))
	{
		kq=tamgiac(a,b,c);
	}
	else
		kq=0;
	xuat(kq);
}
int latamgiac(float a,float b,float c)
{
	if((a+b>c) && (a+c>b) && (b+c>a))
		return 1;
	else
		return 0;
}
void xuat(int kq)
{
	if(kq==0)
		printf("khong la 3 canh cua tma giac");
	else
		if(kq==1)
			printf("la tam giac deu");
		else
			if(kq==2)
				printf("la tam giac vuong can");
			else
				if(kq==3)
					printf("la tam giac vuong");
				else
					if(kq==4)
						printf("la tam giac can");
					else
						printf("la tam giac thuong");
}
int tamgiac(float a,float b,float c)
{
	if(a==b && a==c)
		return 1;
	else
		if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
			if(a==b || a==c || b==c)
				return 2;
			else
				return 3;
		else
			if(a==b || a==c || b==c)
				return 4;
			else
				return 5;
}
void nhap(float &a,float &b,float &c)
{
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
}