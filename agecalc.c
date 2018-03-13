#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<dos.h>


/*check given year is leap year or not*/
int leap_year(int year)
{
    int flag = 0;
    if (year % 100 == 0)
    {
	    if (year % 400 == 0)
	    {
	       flag=1;
	    }
    }
    else if (year % 4 == 0)
    {
		    flag = 1;

    }
    return (flag);
}

void main()
{
int year,month,day,my,mm,md,i,j,cm,cd,cy,n,l=0,m,p,q;
char k;
int DaysInMon[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  time_t ts;
    struct tm *ct;

 clrscr();
    /* enter date of birth */
	i=0;
	gotoxy(30,2);
	textcolor(10);
	cprintf("%c%c AGE CALCULATOR %c%c",174,174,175,175);
	printf("\n\n");
	textcolor(8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
	printf("\n");
	textcolor(5);
	cprintf("Choose what to do:");
	printf("\n");
	printf("\n");
	textcolor(9);
	cprintf("   1.Calculate Age");
	printf("\n");
	cprintf("   2.MODES");
	printf("\n");
	textcolor(RED);
	cprintf("   3.EXIT %c%c%c%c",26,26,26,219);
	printf("\n\n");
		textcolor(8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
	do
	{
	l=0;
	printf("\n");
	textcolor(5);
	cprintf("Choose a number:");
	scanf("%d",&n);
	switch(n)
	{
	 case 1:
	 do
	 {

	do
	{
		i=0;
		clrscr();
			gotoxy(30,2);
	textcolor(10);
	cprintf("%c%c AGE CALCULATOR %c%c",174,174,175,175);
	printf("\n\n");
	textcolor(8);
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
       //	printf("\n");
	       //	printf("\n");
		textcolor(9);
		cprintf("Enter Data Of Your Birth Day:");

		printf("\n\n");

		textcolor(7);
		printf("Enter the year:");
		scanf("%d",&my);
		printf("Enter the month:");
		scanf("%d",&mm);
		if(mm>12)
		{
		printf("Invalid data\n Re-enter the data:");
		i=1;
		for(p=0;p<3;p++)
{
for(q=2000;q<=2010;q++)
{
	sound(q);
	delay(20);
}
nosound();
delay(150);
}
		continue;
		}
		printf("Enter the day:");
		scanf("%d",&md);
		for(m=0;m<12;m++)
		{
		if((m+1)==mm)
		{
		if(DaysInMon[mm]<md)
		{
		printf("\n\n");
		textcolor(RED);
		cprintf("Invalid Data!!!(Re-enter the data:)");
		for(p=0;p<3;p++)
{
for(q=2000;q<=2010;q++)
{
	sound(q);
	delay(20);
}
nosound();
delay(150);
}               delay(150);
		i=1;
		break;
		}
		}

		}
		}while(i);
    /*get current date.*/
    ts = time(NULL);
    ct = localtime(&ts);
     textcolor(1);
     printf("\n");
    cprintf("Current Date: %d/%d/%d",ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);
    cy=ct->tm_year+1900;
    cm=ct->tm_mon+1;
    cd=ct->tm_mday;
    year=cy-my;
    if(cm<mm)
    {
	year--;
	month=12+cm-mm;
    }
    else
    {
	month=cm-mm;
    }

    if(cd<md)
    {
     month--;
     day=DaysInMon[mm]+cd-md;
    }
    else
    {
    day=cd-md;
    }
	if(mm<=2)
		for(i=my;i<cy;i++)
		{
			if (leap_year(i))
				day++;
		}

	else
		for(i=my+1;i<cy;i++)
		{
			if (leap_year(i))
				day++;
		}

	if(month<0)
	{
		year--;
		month=12+month;

	}

       if(day>DaysInMon[mm])
	{
	month++;
	day=day-DaysInMon[mm];
	}
	if(month>=12)
	{
	year++;
    month=month-12;
    }
     textcolor(8);
     printf("\n");
	cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
      printf("\n");
    textcolor(5);
	cprintf("You are %d years %d months and %d days old",year,month,day);
	printf("\n\n\n\n\n\n");
     textcolor(RED);
	cprintf("PRESS 'y' or 'Y' TO CALCULATE AGE AGAIN");
    printf("\n");
    fflush(stdin);
	k=getch();
	 }while(k=='y'||k=='Y');
     break;

     case 3:
     exit(1);

     default:
     {
     //printf("\n");
     textcolor(RED);
     cprintf("INVALID ENTRY !!!");
     for(p=0;p<3;p++)
{
for(q=2000;q<=2010;q++)
{
	sound(q);
	delay(20);
}
nosound();
delay(150);
}
     l=1;
     printf("\n");
     }
     }
     fflush(stdin);
     }while(l);

       main();
}
