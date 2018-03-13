
void stopw()
{
    char ch;
    int h=0,m=0,s=0;
    clrscr();
    while(1)
    {
	printf("Press r to reset");
	printf("\n");
	printf("Press p to pause/resume");
	printf("\n");
	printf("Press s to stop");
	printf("\n");
	gotoxy(40,6);
	printf("%d:%d:%d",h,m,s);
	sound(2050);
	delay(20);
	nosound();
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
	    printf("Use p to pause/resume");
	    printf("\n");
	    printf("Use s to stop");
	    printf("\n");
	    gotoxy(40,6);
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
	    printf("Use p to pause/resume");
	    printf("\n");
	    printf("Use s to stop");
	    printf("\n");
	    gotoxy(40,6);
	    printf("%d:%d:%d",h,m,s);
	    printf("\n");
	    cprintf("You have stopped at %d:%d:%d",h,m,s);
	    printf("\n");
 //	    while(1)
 //	    {
	    sleep(1);
	    break;
      //	    }
      }
      }
}
}
