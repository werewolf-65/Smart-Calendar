#include<stdio.h>
#include<conio.h>

void monin(void);
void adddetails(int);
void seedetails(int);
 int md,months;
struct mon
 {
     char events[2000];
}m[12];
int main()
{
    char ch;

do{
fflush(stdin);
printf("Enter the month=");
scanf("%d",&months);

    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
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
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[n-1].events);
	    fwrite(&m,sizeof(m),1,fp);

	     printf("do you want to add more events(y//n)");
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
	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	    printf("%s",m[n-1].events);
	   }
	   fclose(fp);
       return ;
    }
