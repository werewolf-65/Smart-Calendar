/*This is the front of our project. Welcome !!*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

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
    printf("\n");
    printf("____________________________________________________________________________");
    printf("\n");
    printf("\n");
    //Days of Week Titles
    textcolor(GREEN);
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
	getch();
  return 0;
}
