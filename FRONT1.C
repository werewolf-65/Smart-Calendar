/*This is the front of our project. Welcome !!*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i,j,x=-3;
    char mon[10];
    int day[5][7];
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
    }
    else if((time_->tm_mon+1)==2){
      strcpy(mon,"February");
    }
    else if((time_->tm_mon+1)==3){
      strcpy(mon,"March");
    }
    else if((time_->tm_mon+1)==4){
      strcpy(mon,"April");
    }
    else if((time_->tm_mon+1)==5){
      strcpy(mon,"May");
    }
    else if((time_->tm_mon+1)==6){
      strcpy(mon,"June");
    }
    else if((time_->tm_mon+1)==7){
      strcpy(mon,"July");
    }
    else if((time_->tm_mon+1)==8){
      strcpy(mon,"August");
    }
    else if((time_->tm_mon+1)==9){
      strcpy(mon,"September");
    }
    else if((time_->tm_mon+1)==10){
      strcpy(mon,"October");
    }
    else if((time_->tm_mon+1)==11){
      strcpy(mon,"November");
    }
    else{
      strcpy(mon,"December");
    }
    //Changing day no.
    textcolor(14);
   cprintf("Time:%i:%i:%i", time_->tm_hour, time_->tm_min, time_->tm_sec);
   printf("\t\t");
   cprintf("Date:%s %i",mon,time_->tm_mday);
   printf("\t\t");
   cprintf("Year:%i",time_->tm_year+1900);
   printf("\n");
    //gotoxy(30,20);
    //Placing days in array
    for(i=0;i<5;i++){
      for(j=0;j<7;j++){
	if((x<1)||(x>28)){
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
	if((day[i][j]<1)||(day[i][j]>28)){
	  printf(" \t");
	}
	else if(j==6){
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
  cprintf("BIRTHDAYS");
  gotoxy(60,8);
  printf("->Prashant: March 4");
  gotoxy(60,9);
  printf("->............");
  gotoxy(60,10);
  printf("->.............");
  gotoxy(60,11);
  cprintf("EVENTS");
  gotoxy(60,12);
  printf("->Holi");
  gotoxy(60,13);
  printf("->.......");
  gotoxy(60,14);
  printf("->........:");
  gotoxy(60,15);
  cprintf("TO-DO-LIST");
  gotoxy(60,16);
  printf("->Attend the meeting");
  gotoxy(60,17);
  printf("->Buy the gift");
  gotoxy(60,18);
  printf("->............");
  textcolor(GREEN);
  gotoxy(1,15);
  cprintf("USER MANUAL");
  printf("\n");
  printf("#Program Modes:1.To-Do-List 2.Date Converter 3.Dig. Clock\n4.World Clock 5.Age Calculator 6.Months 7.Events8.Timer\n9.Stopwatch 10.Birthdays\n");
  printf("#Enter the mode name or number to enter the mode\n");
  printf("#Enter q to escape the mode/quit the program\n");
  printf("_______________________________________________________________________________");
  printf("\n");
  cprintf("MAIN PROMPT:");
  printf(">>>");
 getch();
  return 0;
}
