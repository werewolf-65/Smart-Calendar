#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
struct birth
	{
	 char name[30];
	 int year;
	 int month;
	 int day;
	}friends[80];


void jan();
void feb();
void march();
void april();
void may();
void june();
void july();
void aug();
void sep();
void oct();
void nov();
void dec();


void main()
{
FILE *f;
int i=0,j,k=0,c,l;
char a,b;
clrscr();

	f=fopen("birthday.txt","ab+");
	if(f==NULL)
	{
	printf("Error!!!");
	exit(1);
	}
	gotoxy(35,2);
	textcolor(YELLOW);
	cprintf("Birthdays");
	textcolor(13);
	printf("\n");
	cprintf("%c==============================================================================%c",201,187);

	textcolor(10);
cprintf("%c   Enter the no. of month",186);
textcolor(CYAN);
printf("\n");
cprintf("%c",186);
printf("\n");
cprintf("%c   1.January",186);
printf("\n");
cprintf("%c   2.February",186);
printf("\n");
cprintf("%c   3.March",186);
printf("\n");
cprintf("%c   4.April",186);
printf("\n");
cprintf("%c   5.May",186);
printf("\n");
cprintf("%c   6.June",186);
printf("\n");
cprintf("%c   7.July",186);
printf("\n");
cprintf("%c   8.August",186);
printf("\n");
cprintf("%c   9.September",186);
printf("\n");
cprintf("%c   10.October",186);
printf("\n");
cprintf("%c   11.November",186);
printf("\n");
cprintf("%c   12.December",186);
printf("\n");
textcolor(5);
cprintf("%c   13.MODES",186);
printf("\n");
textcolor(RED);
cprintf("%c   14.EXIT %c%c%c%c",186,26,26,26,219);
textcolor(13);
printf("\n");
cprintf("%c==============================================================================%c",200,188);
do
{
k=0;
textcolor(9);
printf("\n");
cprintf("Enter the number:->");
scanf("%d",&c);
switch(c)
{
case(1):
jan();
break;

case(2):
feb();
break;

case(3):
march();
break;

case(4):
april();
break;

case(5):
may();
break;

case(6):
june();
break;

case(7):
july();
break;

case(8):
aug();
break;

case(9):
sep();
break;

case(10):
oct();
break;

case(11):
nov();
break;

case(12):
dec();
break;

case(14):
exit(0);

default:
textcolor(RED);
cprintf("Invalid entry!!!");
for(l=0;l<3;l++)
{
for(k=2000;k<=2010;k++)
{
	sound(k);
	delay(20);
}
nosound();
delay(150);
}
k=1;
}
fflush(stdin);
}while(k);

LEBEL:

	printf("\nAdd any birthdays.??\n");
	textcolor(RED);
	cprintf("(y/n)");
	a=getch();
	 if(a=='y')
{
	do
	{
	fflush(stdin);
	clrscr();
	printf("\nEnter your name:");
	scanf("%[^\n]s",friends[i].name);
	printf("Enter your birth year:");
	scanf("%d",&friends[i].year);
	printf("Enter your birth month:");
	scanf("%d",&friends[i].month);
	printf("Enter your birth day:");
	scanf("%d",&friends[i].day);
	i++;
       printf("\n\nPRESS (y) OR (Y) TO ADD MORE BIRTHDAYS\n");
       textcolor(GREEN);
       cprintf("PRESS ANY OTHER KEY TO GO TO MAIN MENU");
       a=getch();
       }while(a=='y'||a=='Y');
       fwrite(&friends,sizeof(friends),12,f);
       main();
}
else if(a=='n')
{
main();
}
else
{
textcolor(RED);
cprintf("\nInvalid Character!!!\n");
for(l=0;l<3;l++)
{
for(k=2000;k<=2010;k++)
{
	sound(k);
	delay(20);
}
nosound();
delay(150);
}
}
goto LEBEL;
}
void jan()
{
	int i;

	FILE *f;
	f=fopen("birthday.txta","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("1.January\n");
	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==1)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}

void feb()
{
	int i;

	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("2.February\n");
	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==2)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}

void march()
{
	int i,j=8;

	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("3.March\n");
	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==3)
	{
       //	gotoxy(55,j);
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void april()

{
     int i;

	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("4.April\n");
	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==4)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void may()
{
	int i;

	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("5.May\n");
	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==5)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void june()
{
	int i;

	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("6.June\n");
	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==6)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void july()
{
	int i;
	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("7.July\n");

	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==7)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void aug()
{
	int i;
	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("8.August\n");

	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==8)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void sep()
{
	int i;
	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("9.September\n");

	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==9)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}


}

void oct()
{
	int i;
	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("10.October\n");

	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==10)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void nov()
{
	int i;
	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("11.November\n");

	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==11)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}



void dec()
{
	int i;
	FILE *f;
	f=fopen("birthday.txt","rb");
	clrscr();
	if(f==NULL)
	{
		printf("Error!!!");
		exit(1);
	}
	printf("12.December\n");

	fread(&friends,sizeof(friends),12,f);
	for(i=0;i<13;i++)
	if(friends[i].month==12)
	{
		printf("%s\t%d/%d/%d\n",friends[i].name,friends[i].year,friends[i].month,friends[i].day);

	}
}

