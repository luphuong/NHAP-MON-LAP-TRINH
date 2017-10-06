#include<stdio.h>
void nhap(int &gio,int &phut,int &giay);
void congthem(int gio,int phut,int giay);
void xuat(int gio,int phut,int giay);
void main()
{
	int gio,phut,giay;
	nhap(gio,phut,giay);
	congthem(gio,phut,giay);
//	xuat(gio,phut,giay);
}
void xuat(int gio,int phut,int giay)
{
	printf("%.2d:%.2d:%.2d",gio,phut,giay);
	printf("\n");
}
void congthem(int gio,int phut,int giay)
{
	int k;
	scanf("%d",&k);
	if(giay+k<60)
		giay+=k;
	else
	{
		giay=giay+k-60;
		phut++;
		if(phut>=60)
	{
		phut=phut-60;
		gio++;
	}
	}
	xuat(gio,phut,giay);
}
void nhap(int &gio,int &phut,int &giay)
{
	scanf("%d",&gio);
	scanf("%d",&phut);
	scanf("%d",&giay);
	xuat(gio,phut,giay);
}