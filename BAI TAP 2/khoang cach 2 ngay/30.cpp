#include<stdio.h>
void nhap(int &d,int &m,int &y);
int lanamnhuan(int y);
int songay(int d,int m,int y,int a);
int tinh(int m,int y);
void main()
{
	int d1,m1,y1;
	int d2,m2,y2;
	int x=0,y=1;
	nhap(d1,m1,y1);
	nhap(d2,m2,y2);
	if(y1<y2)
	{
	int bo1=songay(d1,m1,y1,x);
	printf("%d\n",bo1);
    int bo2=songay(d2,m2,y2,y);
	printf("%d",bo2);
	}
	else
}
int lanamnhuan(int y)
{
	if((y%4==0 && y%100!=0) || y%400==0)
		return 1;
	else
		return 0;
}
int songay(int d,int m,int y,int a)
{
	if(a==1)
	{
		int s=0;
		int t;
		for(int i=1;i<=m;i++)
		{
			t=tinh(i,y);
			s=s+t;
		}
		s=s-(t-d);
		return s;
	}
	else
	{
		int s=0;
		int t;
		for(int i=12;i>=m;i--)
		{
			t=tinh(i,y);
			s+=t;
		}
		s=s-d;
		return s;
	}
}
int tinh(int)
{ m,int y
	switch(m)
	{
	case 2:	
		if(lanamnhuan(y))
		{
			return 29;
			break;
		}
		 else
		 {
			return 28;
			break;
		 }
	case 4:case 6:case 9:case 11:return 30;break;
	default :return 31;break;
	}
}
void nhap(int &d,int &m,int &y)
{
		scanf("%d%d%d",&d,&m,&y);
}
