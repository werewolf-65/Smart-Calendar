/*This is the front of our project. Welcome !!*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>
#include ".\\clock.h"
#include ".\\timer.h"
#include ".\\stopwa~1.h" //You may have to edit these paths. 
#include ".\\agecalc.h"

//Birthday declarations
struct birth
	{
	 char name[30];
	 int year;
	 int month;
	 int day;
	}friends[80];
void birthd(void);
//Events functions prototypes
void event(void);
void adddetails(int);
void seedetails(int);
int md,months;
struct mon
 {
     char events[2000];
}m[12];
//Date Conversion function prototypes

char day_of_week[][10] = {" ","SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
int bs[][13]={
	{2000,30,32,31,32,31,30,30,30,29,30,29,31},
	{2001,31,31,32,31,31,31,30,29,30,29,30,30},
	{2002,31,31,32,32,31,30,30,29,30,29,30,30},
	{2003,31,32,31,32,31,30,30,30,29,29,30,31},
	{2004,30,32,31,32,31,30,30,30,29,30,29,31},
	{2005,31,31,32,31,31,31,30,29,30,29,30,30},
	{2006,31,31,32,32,31,30,30,29,30,29,30,30},
	{2007,31,32,31,32,31,30,30,30,29,29,30,31},
	{2008,31,31,31,32,31,31,29,30,30,29,29,31},
	{2009,31,31,32,31,31,31,30,29,30,29,30,30},
	{2010,31,31,32,32,31,30,30,29,30,29,30,30},
	{2011,31,32,31,32,31,30,30,30,29,29,30,31},
	{2012,31,31,31,32,31,31,29,30,30,29,30,30},
	{2013,31,31,32,31,31,31,30,29,30,29,30,30},
	{2014,31,31,32,32,31,30,30,29,30,29,30,30},
	{2015,31,32,31,32,31,30,30,30,29,29,30,31},
	{2016,31,31,31,32,31,31,29,30,30,29,30,30},
	{2017,31,31,32,31,31,31,30,29,30,29,30,30},
	{2018,31,32,31,32,31,30,30,29,30,29,30,30},
	{2019,31,32,31,32,31,30,30,30,29,30,29,31},
	{2020,31,31,31,32,31,31,30,29,30,29,30,30},
	{2021,31,31,32,31,31,31,30,29,30,29,30,30},
	{2022,31,32,31,32,31,30,30,30,29,29,30,30},
	 {2023,31,32,31,32,31,30,30,30,29,30,29,31},
	{2024,31,31,31,32,31,31,30,29,30,29,30,30},
		{2025,31,31,32,31,31,31,30,29,30,29,30,30},
		{2026,31,32,31,32,31,30,30,30,29,29,30,31},
		{2027,30,32,31,32,31,30,30,30,29,30,29,31},
		{2028,31,31,32,31,31,31,30,29,30,29,30,30},
		{2029,31,31,32,31,32,30,30,29,30,29,30,30},
		{2030,31,32,31,32,31,30,30,30,29,29,30,31},
		{2031,30,32,31,32,31,30,30,30,29,30,29,31},
		{2032,31,31,32,31,31,31,30,29,30,29,30,30},
		{2033,31,31,32,32,31,30,30,29,30,29,30,30},
	{2034,31,32,31,32,31,30,30,30,29,29,30,31},
		{2035,30,32,31,32,31,31,29,30,30,29,29,31},
		{2036,31,31,32,31,31,31,30,29,30,29,30,30},
		{2037,31,31,32,32,31,30,30,29,30,29,30,30},
		{2038,31,32,31,32,31,30,30,30,29,29,30,31},
		{2039,31,31,31,32,31,31,29,30,30,29,30,30},
		{2040,31,31,32,31,31,31,30,29,30,29,30,30},
		{2041,31,31,32,32,31,30,30,29,30,29,30,30},
		{2042,31,32,31,32,31,30,30,30,29,29,30,31},
		{2043,31,31,31,32,31,31,29,30,30,29,30,30},
		{2044,31,31,32,31,31,31,30,29,30,29,30,30},
		{2045,31,32,31,32,31,30,30,29,30,29,30,30},
		{2046,31,32,31,32,31,30,30,30,29,29,30,31},
		{2047,31,31,31,32,31,31,30,29,30,29,30,30},
		{2048,31,31,32,31,31,31,30,29,30,29,30,30},
		{2049,31,32,31,32,31,30,30,30,29,29,30,30},
		{2050,31,32,31,32,31,30,30,30,29,30,29,31},
		{2051,31,31,31,32,31,31,30,29,30,29,30,30},
		{2052,31,31,32,31,31,31,30,29,30,29,30,30},
		{2053,31,32,31,32,31,30,30,30,29,29,30,30},
		{2054,31,32,31,32,31,30,30,30,29,30,29,31},
		{2055,31,31,32,31,31,31,30,29,30,29,30,30},
		{2056,31,31,32,31,32,30,30,29,30,29,30,30},
		{2057,31,32,31,32,31,30,30,30,29,29,30,31},
		{2058,30,32,31,32,31,30,30,30,29,30,29,31},
		{2059,31,31,32,31,31,31,30,29,30,29,30,30},
	{2060,31,31,32,32,31,30,30,29,30,29,30,30},
		{2061,31,32,31,32,31,30,30,30,29,29,30,31},
		{2062,30,32,31,32,31,31,29,30,29,30,29,31},
		{2063,31,31,32,31,31,31,30,29,30,29,30,30},
		{2064,31,31,32,32,31,30,30,29,30,29,30,30},
		{2065,31,32,31,32,31,30,30,30,29,29,30,31},
		{2066,31,31,31,32,31,31,29,30,30,29,29,31},
	{2067,31,31,32,31,31,31,30,29,30,29,30,30},
		{2068,31,31,32,32,31,30,30,29,30,29,30,30},
		{2069,31,32,31,32,31,30,30,30,29,29,30,31},
		{2070,31,31,31,32,31,31,29,30,30,29,30,30},
		{2071,31,31,32,31,31,31,30,29,30,29,30,30},
		{2072,31,32,31,32,31,30,30,29,30,29,30,30},
		{2073,31,32,31,32,31,30,30,30,29,29,30,31},
		{2074,31,31,31,32,31,31,30,29,30,29,30,30},
		{2075,31,31,32,31,31,31,30,29,30,29,30,30},
		{2076,31,32,31,32,31,30,30,30,29,29,30,30},
		{2077,31,32,31,32,31,30,30,30,29,30,29,31},
		{2078,31,31,31,32,31,31,30,29,30,29,30,30},
		{2079,31,31,32,31,31,31,30,29,30,29,30,30},
		{2080,31,32,31,32,31,30,30,30,29,29,30,30},
		{2081, 31, 31, 32, 32, 31, 30, 30, 30, 29, 30, 30, 30},
		{2082, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30},
	{2083, 31, 31, 32, 31, 31, 30, 30, 30, 29, 30, 30, 30},
		{2084, 31, 31, 32, 31, 31, 30, 30, 30, 29, 30, 30, 30},
		{2085, 31, 32, 31, 32, 30, 31, 30, 30, 29, 30, 30, 30},
		{2086, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30},
		{2087, 31, 31, 32, 31, 31, 31, 30, 30, 29, 30, 30, 30},
		{2088, 30, 31, 32, 32, 30, 31, 30, 30, 29, 30, 30, 30},
		{2089, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30},
		{2090, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30}
};
int IsLeapYear(int year);
int IsRangeEng(int yy, int mm, int dd);
int IsRangeNep(int yy, int mm, int dd);
void EngToNep(int yy,int mm,int dd);
void NepToEng(int yy,int mm,int dd);
void dateconv(void);

int main()
{
    int i,j,x,mode=10;
    int y,m,d,ch; //for date conversion
    char mon[10];
    int day[5][7];
    int ldom;
    time_t rawtime;
    struct tm*  time_;

    time(&rawtime);
    time_ = localtime(&rawtime);

    clrscr();
    printf("\t\t\t");
    textcolor(GREEN);
    cprintf("WELCOME TO SMART CALENDAR!");
    printf("\n");

    //Changing month no. into names
    printf("______________________________________________________________________________\n\n");
    if((time_->tm_mon+1)==1){
      strcpy(mon,"January");
      x=0;
      ldom=31;
    }
    else if((time_->tm_mon+1)==2){
      strcpy(mon,"February");
      ldom=28;
      x=-3;
    }
    else if((time_->tm_mon+1)==3){
      strcpy(mon,"March");
      ldom=31;
      x=-3;
    }
    else if((time_->tm_mon+1)==4){
      strcpy(mon,"April");
      ldom=30;
      x=1;
    }
    else if((time_->tm_mon+1)==5){
      strcpy(mon,"May");
      ldom=31;
      x=-1;
    }
    else if((time_->tm_mon+1)==6){
      strcpy(mon,"June");
      ldom=30;
      x=-4;
    }
    else if((time_->tm_mon+1)==7){
      strcpy(mon,"July");
      ldom=31;
      x=1;
    }
    else if((time_->tm_mon+1)==8){
      strcpy(mon,"August");
      ldom=31;
      x=-2;
    }
    else if((time_->tm_mon+1)==9){
      strcpy(mon,"September");
      ldom=30;
      x=-5;
    }
    else if((time_->tm_mon+1)==10){
      strcpy(mon,"October");
      ldom=31;
      x=0;
    }
    else if((time_->tm_mon+1)==11){
      strcpy(mon,"November");
      ldom=30;
      x=-3;
    }
    else{
      strcpy(mon,"December");
      ldom=31;
      x=-5;
    }
    //Changing day no.
    textcolor(14);
   cprintf("Time:%i:%i:%i", time_->tm_hour, time_->tm_min, time_->tm_sec);
   printf("\t\t\t");
   cprintf("Date:%s %i",mon,time_->tm_mday);
   printf("\t\t\t");
   cprintf("Year:%i",time_->tm_year+1900);
   printf("\n");
    //gotoxy(30,20);
    //Placing days in array
    for(i=0;i<5;i++){
      for(j=0;j<7;j++){
	if((x<1)||(x>ldom)){
	  day[i][j]=0;
	}
	else{
	  day[i][j]=x;
	}
	x++;
      }
    }
    gotoxy(100,100);
    printf("\n");
    printf("____________________________________________________________________________");
    printf("\n");
    printf("\n");
    //Days of Week Titles
    textcolor(GREEN);
    printf("\t\t\t");
    cprintf("%s",mon);
    printf("\n");
    cprintf("SUN");
    printf("\t");
    cprintf("MON");
    printf("\t");
    cprintf("TUE");
    printf("\t");
    cprintf("WED");
    printf("\t");
    cprintf("THU");
    printf("\t");
    cprintf("FRI");
    printf("\t");
    cprintf("SAT");
    printf("\t");
    printf("\n");
    for(i=0;i<5;i++){
      for(j=0;j<7;j++){
	if((day[i][j]<1)||(day[i][j]>ldom)){
	  printf(" \t");
	}
	else if(j==6){
	if(time_->tm_mday==day[i][j]){
	textcolor(BLUE);
	cprintf("%d",day[i][j]);
	printf("\t");
	continue;
	}
	 textcolor(YELLOW);
	 cprintf("%d",day[i][j]);
	 printf("\t");
	}
	else if(time_->tm_mday==day[i][j]){
	textcolor(BLUE);
	 cprintf("%d",day[i][j]);
	 printf("\t");
	}
	else{
	printf("%d\t",day[i][j]);
      }
      }
      printf("\n");
    }
  gotoxy(60,7);
  printf("|\t");
  cprintf("BIRTHDAYS");
  gotoxy(60,8);
  printf("|->13:Anish");
  gotoxy(60,9);
  printf("|->18:Amrit");
  gotoxy(60,10);
  printf("|->30:Samar");
  gotoxy(60,11);
  printf("|\t");
  cprintf("EVENTS");
  gotoxy(60,12);
  printf("|->17:Ghode Jatra");
  gotoxy(60,13);
  printf("|->25:Ram Nawami");
  gotoxy(60,14);
  printf("|->29:Mahavir Jayanti");
  gotoxy(60,15);
  printf("|\t");
  cprintf("TO-DO-LIST");
  gotoxy(60,16);
  printf("|->Attend the class");
  gotoxy(60,17);
  printf("|->Submit the project");
  gotoxy(60,18);
  printf("|->..................");
  gotoxy(1,15);
  while(mode !=0){
  textcolor(GREEN);
  printf("______________________________________________________\n");
  cprintf("USER MANUAL");
  printf("\n");
  printf("#Program Modes:1.To-Do-List 2.Date Converter 3.Dig. Clock\n4.Age Calculator 5.Events 6.Timer 7.Stopwatch\n8.Birthdays\n");
  printf("#Enter the mode number to enter the mode\n");
  printf("#Enter 0 to quit the program\n");
  printf("_______________________________________________________________________________");
  printf("\n");
  cprintf("MAIN PROMPT:");
  printf(">>>");
  scanf("%d",&mode);
  if(mode==3){
  clo();
  }
  else if(mode==4){
	agecalc();
  }
  else if(mode==6){
  tim();
  }
  else if(mode==7){
  stopw();
  }
  else if(mode==2){
  dateconv();
  }
  else if(mode==8){
       //	birthd();
  }
  else if(mode==5){
  event();
  }
  else{
     break;
  }
  }
return 0;
}


//Date Conversion Functions Definition
int IsLeapYear(int year)
	{
	    int a = year;
	    if (a%100==0)
	    {
		if(a%400==0)
		{
		    return 1;
		}
		else
		    {
		    return 0;
		}

	    } else {
		if (a%4==0)
		{
		    return 1;
		} else {
		    return 0;
		}
	    }
	}
int IsRangeEng(int yy, int mm, int dd){
	    if(yy<1944 || yy>2033){
		printf("Supported only between 1944-2033");
		getch();
		return 0;
	    }

	    if(mm<1 || mm >12){
		printf("Error! value 1-12 only");
		getch();
		return 0;
	    }

	    if(dd<1 || dd >31){
		printf( "Error! value 1-31 only");
		getch();
		return 0;
	    }

	    return 1;
	}

	int IsRangeNep(int yy, int mm, int dd)
	{
	    if (yy < 2000 || yy > 2090)
	    {
		printf("Supported only between 2000-2090");
		getch();
		return 0;
	    }
	    if(mm<1 || mm >12) {
		printf("Error! value 1-12 only");
		getch();
		return 0;
	    }

	    if(dd<1 || dd >32){
		printf("Error! value 1-31 only");
		getch();
		return 0;
	    }
	    return 1;
	}

	void EngToNep(int yy,int mm,int dd)
	{
		// english month data.
		int month[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
		int lmonth[12] ={31,29,31,30,31,30,31,31,30,31,30,31};
		int def_eyy = 1944;									//spear head english date...
		int def_nyy = 2000;
		int def_nmm = 9;
		int def_ndd = 16;		//spear head nepali date...
		int total_eDays=0;
		int total_nDays=0; int a=0; int day=6;		//all the initializations...
		int m = 0; int y = 0; int i =0; int j = 0;
		int numDay=0;

		// count total no. of days in-terms of year
		for(i=0; i<(yy-def_eyy); i++){	//total days for month calculation...(english)
		    if(IsLeapYear(def_eyy+i))
			for(j=0; j<12; j++)
			    {
				total_eDays += lmonth[j];
			    }
		    else
			for(j=0; j<12; j++)
			    {
				total_eDays += month[j];
			    }
		}

		// count total no. of days in-terms of month
		for(i=0; i<(mm-1); i++){
		    if(IsLeapYear(yy))
			total_eDays += lmonth[i];
		    else
			total_eDays += month[i];
		}

		// count total no. of days in-terms of date
		total_eDays += dd;


		i = 0; j = def_nmm;
		total_nDays = def_ndd;
		m = def_nmm;
		y = def_nyy;

		// count nepali date from array
		while(total_eDays != 0) {
		    a = bs[i][j];
		    total_nDays++;						//count the days
		    day++;								//count the days interms of 7 days
		    if(total_nDays > a){
			m++;
			total_nDays=1;
			j++;
		    }
		    if(day > 7)
			day = 1;
		    if(m > 12){
			y++;
			m = 1;
		    }
		    if(j > 12){
			j = 1;
			i++;
		    }
		    total_eDays--;
		}

		numDay=day;
		textcolor(YELLOW);
	       cprintf("The Equivalent Nepali Date is: ");
	       cprintf("%d//%d//%d",y,m,total_nDays);
	       printf("\n");
	       cprintf("The day is %s",day_of_week[day]);
	       printf("\n");
	       getch();
	    }
void NepToEng(int yy,int mm,int dd)
{
    int def_eyy = 1943	;
	    int def_emm=4 ;
	    int def_edd=13;		// init english date.
	    int def_nyy = 2000; int def_nmm = 1; int def_ndd = 1;		// equivalent nepali date.
	    int total_eDays=0; int total_nDays=0; int a=0; int day=4-1;		// initializations...
	    int m = 0; int y = 0; int i=0;
	    int j = 0;
	    int k = 0;
	    int numDay = 0;

	    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	    int lmonth[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		// count total days in-terms of year
		for(i=0; i<(yy-def_nyy); i++){
		    for(j=1; j<=12; j++){
			total_nDays += bs[k][j];
		    }
		    k++;
		}

		// count total days in-terms of month
		for(j=1; j<mm; j++){
		    total_nDays += bs[k][j];
		}

		// count total days in-terms of dat
		total_nDays += dd;

		//calculation of equivalent english date...
		total_eDays = def_edd;
		m = def_emm;
		y = def_eyy;
		while(total_nDays != 0){
		    if(IsLeapYear(y))
		    {
			a = lmonth[m];
		    }
		    else
		    {
			a = month[m];
		    }
		    total_eDays++;
		    day++;
		    if(total_eDays > a){
			m++;
			total_eDays = 1;
			if(m > 12){
			    y++;
			    m = 1;
			}
		    }
		    if(day > 7)
			day = 1;
		    total_nDays--;
		}
		numDay = day;
		textcolor(YELLOW);
		cprintf("The Equivalent English date is: ");
		printf("\n");
		cprintf("%d//%d//%d",y,m,total_eDays);
		printf("\n");
		 cprintf("The day is %s",day_of_week[day]);
		 printf("\n");
		 getch();
	    }

    void dateconv(){
    int ch,y,m,d;
    printf("Enter 1 to convert date in ad to bs:\n");
    printf("Enter 2 to convert date in bs to ad:\n");
    printf("Press 3 to exit:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
	printf("Enter date in ad(YYYY/MM/DD)\n");
	scanf("%d/%d/%d",&y,&m,&d);
	if(IsRangeEng(y,m,d)==0)
	{
	break;
	}
    EngToNep(y,m,d);
    break;

    case 2:
	printf("Enter date in bs(YYYY/MM/DD):\n");
	scanf("%d/%d/%d",&y,&m,&d);
	if(IsRangeNep(y,m,d)==0)
	{
	    break;
	}
	NepToEng(y,m,d);
	break;
    case 3:
	break;
    default:
	break;
    }
    }

//Events
void event(void){
    char ch;

do{
fflush(stdin);
printf("Enter the month(1-12) e.g.1 for Jan=");
scanf("%d",&months);

    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your mode:>");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(months);
    }
else{
	 adddetails(months);
}
printf("\n\nDo you want to continue.(y//n)");
ch=getche();
fflush(stdin);
printf("\n");

}while(ch!='n');
}

void adddetails(int n)
{
    FILE *fp;
    char test;
    fp=fopen("events.dat","ab");
    if(fp==NULL)
    {
    printf("error");
    }
	do
	{
	    fflush(stdin);
	    printf("\n");
	    printf("Add the events[e.g.01 New Year's Day].Press ^ to terminate:");
	    scanf("%[^'^']",m[n-1].events);
	    fwrite(&m,sizeof(m),1,fp);

	     printf("Do you want to add more events??(y//n)");
	    test=getche();
	}while(test=='y');
	fclose(fp);
return ;
    }

    void seedetails(int n)
    {
    FILE *fp;
    fp=fopen("events.dat","rb");
    if(fp==NULL)
    {
    printf("error");
    }
	   printf("Events of this month:>");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	    printf("%s",m[n-1].events);
	   }
	   fclose(fp);
	   return;
    }
