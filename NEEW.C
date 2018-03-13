#include<stdio.h>
#include<conio.h>



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

    do
{

fflush(stdin);
printf("Enter the month=");
scanf("%d",&months);


if (months==1)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
    {
	seedetails(1);
    }
else

	 adddetails(1);
    }

if (months==2)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)



  {
	seedetails(2);
    }
else
	 adddetails(2);
    }

if (months==3)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)



  {
	seedetails(3);
    }
else
	 adddetails(3);
    }

if (months==4)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(4);
    }
else
	 adddetails(4);
    }

if (months==5)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(5);
    }
else
	 adddetails(5);
    }

if (months==6)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(6);

    }
else
	 adddetails(6);
    }

if (months==7)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
{


	 seedetails(7);
}

else
    adddetails(7);

    }

if (months==8)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(8);
    }
else
	 adddetails(8);
    }

if (months==9)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
{
    seedetails(9);
}
	 adddetails(9);
    }

if (months==10)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(10);
    }
else
	 adddetails(10);
    }

if (months==11)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(11);
    }
else
	 adddetails(11);
    }

if (months==12)
{
    printf("1.See the events\n");
    printf("2.Add the events\n");
    printf("Enter your modes");
    scanf("%d",&md);
    if(md==1)
  {
	seedetails(12);
    }
else
	 adddetails(12);

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
    fp=fopen("eveents.dat","ab");
    if(fp==NULL)
    {
    printf("error");

    }
    if (n==1)
    {


	do
	{
	    fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate: ");

	    scanf("%[^'^']",m[0].events);

	    fwrite(&m,sizeof(m),1,fp);

	    printf("Do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==2)
    {


	do
	{
	    fflush(stdin);
	    printf("\n");

	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[1].events);
	    fwrite(&m,sizeof(m),1,fp);

	    printf("Do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==3)
    {

	do
	{ fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[2].events);
	    fwrite(&m,sizeof(m),1,fp);

	 printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==4)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[3].events);
	    fwrite(&m,sizeof(m),1,fp);

	  printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==5)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[4].events);
	    fwrite(&m,sizeof(m),1,fp);
 printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==6)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[5].events);
	    fwrite(&m,sizeof(m),1,fp);

	   printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==7)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[6].events);
	    fwrite(&m,sizeof(m),1,fp);

	    printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');

	fclose(fp);
    }

    if (n==8)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[7].events);
	    fwrite(&m,sizeof(m),1,fp);

	   printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==9)
    {


	do
	{
 fflush(stdin);
	    printf("\n");
	    	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[8].events);
	    fwrite(&m,sizeof(m),1,fp);

	     printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==10)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[9].events);
	    fwrite(&m,sizeof(m),1,fp);

	     printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==11)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[10].events);
	    fwrite(&m,sizeof(m),1,fp);

	  printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }

    if (n==12)
    {


	do
	{
	     fflush(stdin);
	    printf("\n");
	    printf("Add the events.Press ^ to terminate:");
	    scanf("%[^'^']",m[11].events);
	    fwrite(&m,sizeof(m),1,fp);

	     printf("do you want to add more events(y//n)");
	    test=getche();


	}while(test=='y');
	fclose(fp);
    }
return ;
    }


    void seedetails(int n)
    {
    FILE *fp;
    fp=fopen("eveents.dat","rb");
    if(fp==NULL)
    {
    printf("error");

    }
       if (n==1)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[0].events);
	   }
	   fclose(fp);
       }
	if (n==2)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("\n%s",m[1].events);
	   }
	   fclose(fp);
       } if (n==3)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[2].events);
	   }
	   fclose(fp);
       } if (n==4)


       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[3].events);
	   }
	   fclose(fp);
       } if (n==5)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[4].events);
	   }
	   fclose(fp);
       } if (n==6)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[5].events);
	   }
	   fclose(fp);
       } if (n==7)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[6].events);
	   }
	   fclose(fp);
       } if (n==8)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[7].events);
	   }
	   fclose(fp);
       } if (n==9)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[8].events);
	   }
	   fclose(fp);
       } if (n==10)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[9].events);
	   }
	   fclose(fp);
       } if (n==11)
       {
	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[10].events);
	   }
	   fclose(fp);
       } if (n==12)
       {

	   printf("Events of this months");
	   while(fread(&m,sizeof(m),1,fp)==1)
	   {
	       printf("%s",m[11].events);
	   }
	   fclose(fp);
       }
       return ;
    }
