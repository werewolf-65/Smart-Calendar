void tim(void){
    int gd = DETECT, gm;
    int l,k;
    int midx, midy;
    int x_hours=0;
	int x_minutes=0;
	int x_seconds=0;
    int x_milliseconds=0;
	int totaltime=0,count_down_time_in_secs,time_left=0;
    char left[10],given[10];
    clock_t x_startTime,x_countTime;
    printf("Set the time:(in seconds)\n");
    scanf("%d",&count_down_time_in_secs);
    x_startTime=clock();  // start clock
    time_left=count_down_time_in_secs-x_seconds;   // update timer

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /* mid pixel in horizontal and vertical axis */
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    while (time_left>0) {
	cleardevice();
	setcolor(WHITE);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(midx - 250, midy - 40, midx + 250, midy + 40);
	floodfill(midx, midy, WHITE);
	setcolor(RED);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);

	moveto(midx, midy);
	x_countTime=clock(); // update timer difference
		x_milliseconds=x_countTime-x_startTime;
		x_seconds=(x_milliseconds/(CLOCKS_PER_SEC))-(x_minutes*60);
		x_minutes=(x_milliseconds/(CLOCKS_PER_SEC))/60;
		x_hours=x_minutes/60;

		time_left=count_down_time_in_secs-x_seconds; // subtract to get difference
	sprintf(left,"%d",time_left);
	sprintf(given,"%d",count_down_time_in_secs);
	outtext(left);
	sound(2050);
	delay(20);
	nosound();
	delay(1000);
    }
	cleardevice();
	moveto(midx,midy);
	outtext("Time Up!");
    getch();
    closegraph();
}