#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		if(a<c)
			printf("%d",a);
		else
			if(c>b)
				printf("%d",c);
			else
				printf("%d",b);
	else
		if(b<c)
			printf("%d",b);
		else
			if(c>a)
				printf("%d",c);
			else
				printf("%d",a);
}