#include<stdio.h>
void nhap(char &k);
void xuat(int kq);
int kiemtra(char k);
void main()
{
	char k;
	nhap(k);
	int kq=kiemtra(k);
	xuat(kq);
}
int kiemtra(char k)
{
	if(k>='A' && k<='Z')
		return 1;
	else
		if(k>='a' && k<='z')
			return 2;
		else
			if(k>='0' && k<='9')
				return 3;
			else
				if(k=='+' || k=='-' || k=='*' || k=='/')
					return 4;
				else
					if(k=='%' || k=='^')
						return 5;
					else
						return 6;
}
void xuat(int kq)
{
	printf("%d",kq);
}
void nhap(char &k)
{
	scanf("%c",&k);
}