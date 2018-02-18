/*This is the front of our project. Welcome !!*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define UNDER "\x1B[4m"
#define ITA "\x1B[3m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define NORM "\x1B[0m"

/*void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}*/

int main()
{
    int i,j,x=-3;
    char mon[10];
    int day[5][7];
    time_t rawtime;
    struct tm*  time_;

    time(&rawtime);
    time_ = localtime(&rawtime);

    gotoxy(30, 5);
    system("setterm -bold on");
    printf("%s%sWELCOME TO SMART CALENDAR!\n%s",GREEN,UNDER,NORM);
    system("setterm -bold off");
    //Changing month no. into names
    printf("____________________________________________________________________________\n\n\n");
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
    printf("Time:%i:%i:%i\t\tDate:%s %i\t\t\tYear:%i\n", time_->tm_hour, time_->tm_min, time_->tm_sec,mon,time_->tm_mday,
        time_->tm_year+1900);
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
    printf("%sSUN\tMON\tTUE\tWED\tTHURS\tFRI\tSAT\n%s",YELLOW,NORM);
    for(i=0;i<5;i++){
      for(j=0;j<7;j++){
        if((day[i][j]<1)||(day[i][j]>28)){
          printf(" \t");
        }
        else if(j==6){
          printf("%s%d\t%s",RED,day[i][j],NORM);
        }
        else if(time_->tm_mday==day[i][j]){
          printf("%s%d\t%s",YELLOW,day[i][j],NORM);
        }
        else{
        printf("%d\t",day[i][j]);
      }
      }
      printf("\n");
    }
        return 0;
}
