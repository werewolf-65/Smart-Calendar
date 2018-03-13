#include<stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
    char ch;
    int h=0,m=0,s=0;
    while(1)
    {
        printf("%d:%d:%d",h,m,s);
        sleep(1);
        clrscr();
	s++;
	if(s==59&&m!=59)
	{
	    m++;
	    s=0;

	}
	if(s==59&&m==59)
	{
	    h++;
	    m=0;
	    s=0;
	}
	if(kbhit())
	{
	    ch=getch();
	    if(ch=='r')
	    {
		h=0;
		m=0;
		 s=0;
	    }
	    if(ch=='p')
	    {
	    printf("%d:%d:%d",h,m,s);
		while(1)
		{
		    sleep(1);
		    if (kbhit())
		    {
			ch=getch();
			if(ch=='p')
			{
			    break;
			}
		    }
		}
	    }
	    if(ch=='s')
	    {
	    printf("%d:%d:%d",h,m,s);
	    while(1)
	    {
	    sleep();
	    break;
	    }}

	if (ch=='e')
	{
	    exit(0);
	}
    }
}
}
