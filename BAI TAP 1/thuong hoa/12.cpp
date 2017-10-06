#include<stdio.h>
void nhap(char &n);
char thuonghoa(char n);
void xuat(char kq);
void main()
{
	char n;;
	nhap(n);
	char kq=thuonghoa(n);
	xuat(kq);
}
void xuat(char kq)
{
	printf("%c",kq);
}
char thuonghoa(char n)
{
	if(n>='A' && n<='Z')
		n=n+32;
	else
		n=n-32;
	return n;
}
void nhap(char &n)
{
	scanf("%c",&n);
}