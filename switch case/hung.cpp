#include<stdio.h>
#include<conio.h>
void main()
{
	int imenu,isubmenu;
	printf("------------------\n");
	printf("  MAIN MENU  \n");
	printf("------------------\n");
	printf("1.file\n");
	printf("2.edit\n");
	printf("3.search\n");
	printf("chon muc tuong ung: ");
	scanf("%d",&imenu);
	switch(imenu)
	{
	case 1:printf("---------------\n");
		   printf("  MENU FILE  \n");
	       printf("------------------\n");
	       printf("1.new\n");
	       printf("2.open\n");
		   printf("chon chuc nang tuong ung: ");
		   scanf("%d",&isubmenu);
		   switch(isubmenu)
		   {
		   case 1:printf("ban da chon chuc nang new file\n");
			      break;
		   case 2:printf("ban da chon chuc nang open file\n");
		   }
		   break;
    case 2:printf("ban da chon chuc nang edit\n");
		break;
	case 3:printf("ban da chon chuc nang search\n");
	};
	getch();
}
