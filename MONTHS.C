#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i,j,x,mode=10;
    int y,m,d,ch; //for date conversion
    char mon[10];
    int day[5][7];
    int ldom;
    int monin;
    time_t rawtime;
    struct tm*  time_;

    time(&rawtime);
    time_ = localtime(&rawtime);

    clrscr();
    printf("\t\t\t");
    textcolor(GREEN);
    printf("\n");
    printf("Enter the month no:");
    scanf("%d",&monin);
    //Changing month no. into names
    printf("______________________________________________________________________________\n\n");
    if(monin==1){
      strcpy(mon,"January");
      x=0;
      ldom=31;
    }
    else if(monin==2){
      strcpy(mon,"February");
      ldom=28;
      x=-3;
    }
    else if(monin==3){
      strcpy(mon,"March");
      ldom=31;
      x=-3;
    }
    else if(monin==4){
      strcpy(mon,"April");
      ldom=30;
      x=1;
    }
    else if(monin==5){
      strcpy(mon,"May");
      ldom=31;
      x=-1;
    }
    else if(monin==6){
      strcpy(mon,"June");
      ldom=30;
      x=-4;
    }
    else if(monin==7){
      strcpy(mon,"July");
      ldom=31;
      x=1;
    }
    else if(monin==8){
      strcpy(mon,"August");
      ldom=31;
      x=-2;
    }
    else if(monin==9){
      strcpy(mon,"September");
      ldom=30;
      x=-5;
    }
    else if(monin==10){
      strcpy(mon,"October");
      ldom=31;
      x=0;
    }
    else if(monin==11){
      strcpy(mon,"November");
      ldom=30;
      x=-3;
    }
    else if(monin==12){
      strcpy(mon,"December");
      ldom=31;
      x=-5;
    }
    else{
    printf("Invalid Entry!");
    getch();
    exit(1);
    }

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
	if(time_->tm_mday==day[i][j]&&(time_->tm_mon+1)==monin){
	textcolor(BLUE);
	cprintf("%d",day[i][j]);
	printf("\t");
	continue;
	}
	 textcolor(YELLOW);
	 cprintf("%d",day[i][j]);
	 printf("\t");
	}
	else if(time_->tm_mday==day[i][j]&&(time_->tm_mon+1)==monin){
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