#include<stdio.h>
#include<conio.h>

void monin(void);
void addbirthday(int);
void seebirthday(int);
 int md,months;
struct mon
 {
     char name[30];
     int year;
     int day;
     int i;
}m[12];
void main()
{
    char ch;
    int l,n;
	clrscr();
do{
clrscr();
fflush(stdin);

	gotoxy(30,2);
	textcolor(10);
	cprintf("%c%c BIRTHDAYS %c%c",174,174,175,175);
	printf("\n\n");
	textcolor(8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
	textcolor(9);
	cprintf("MAIN MENU:");
printf("\n\n");
textcolor(11);
cprintf("   1.January");
printf("\n");
cprintf("   2.February");
printf("\n");
cprintf("   3.March");
printf("\n");
cprintf("   4.April");
printf("\n");
cprintf("   5.May");
printf("\n");
cprintf("   6.June");
printf("\n");
cprintf("   7.July");
printf("\n");
cprintf("   8.August");
printf("\n");
cprintf("   9.September");
printf("\n");
cprintf("   10.October");
printf("\n");
cprintf("   11.November");
printf("\n");
cprintf("   12.December");
printf("\n");
textcolor(5);
cprintf("   13.MODES");
printf("\n");
textcolor(RED);
cprintf("   14.EXIT %c%c%c%c",26,26,26,219);
	textcolor(8);
	printf("\n");
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);

printf("\n");
textcolor(14);
cprintf("Enter the MONTH or any other options:");
scanf("%d",&months);
if(months==1||months==2||months==3||months==4||months==5||months==6||months==7||months==8||months==9||months==10||months==11||months==12)
{
clrscr();
	gotoxy(30,2);
	textcolor(10);
	cprintf("%c%c BIRTHDAYS %c%c",174,174,175,175);
	printf("\n\n");
	textcolor(8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
	printf("\n\n");
    textcolor(5);
    cprintf("1.See Birthday for this month");
    printf("\n");
    cprintf("2.Add Birthday for this month");
	textcolor(8);
	printf("\n\n");
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
   textcolor(14);
   cprintf("Enter your modes:");
    scanf("%d",&md);
    if(md==1)
  {
	seebirthday(months);
    }
else{
	 addbirthday(months);
}
printf("\n\nDo you want to continue.(y//n)");
ch=getche();
fflush(stdin);
printf("\n");
}
else if(months==14)
exit(1);

else
{
printf("\n");
textcolor(RED);
cprintf("Invalid entry!!!\n(Press any key to enter again)");
getch();
}

}while(ch!='n');
main();
}

void addbirthday(int n)
{
    FILE *fp;
    char test;
    clrscr();
    fp=fopen("birth.dat","ab");
    if(fp==NULL)
    {
    printf("error");
    }
	do
	{
	    fflush(stdin);
	    printf("\n");
	    printf("Enter your name:");
	    gets(m[n-1].name);
	    printf("\n");
	    printf("Enter birht year:");
	    fflush(stdin);
	    scanf("%d",&m[n-1].year);
	    printf("Enter birth day:");
	    fflush(stdin);
	    scanf("%d",&m[n-1].day);
	    fwrite(&m,sizeof(m),1,fp);

	     printf("do you want to add more birthdays??(y//n)");
	    test=getche();
	}while(test=='y');
	fclose(fp);
return ;
    }

    void seebirthday(int n)
    {
    FILE *fp;
    clrscr();
    fp=fopen("birth.dat","rb");
    if(fp==NULL)
    {
    printf("error");
    }
	   printf("Birthdays of this months:");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	   printf("\n");
	   printf("%s\t%d/%d/%d",m[n-1].name,m[n-1].year,n,m[n-1].day);
	   }
	   fclose(fp);
       return ;
    }
