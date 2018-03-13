void clo(void){
    int gd = DETECT, gm;
    int midx, midy;
    long current_time;
    char timeStr[256];
 
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 
    /* mid pixel in horizontal and vertical axis */
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
 
    while (!kbhit()) {
        cleardevice();
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        rectangle(midx - 250, midy - 40, midx + 250, midy + 40);
        floodfill(midx, midy, WHITE);
        /* Get Current epoch time in seconds */
        current_time = time(NULL);
        /* store the date and time in string */
        strcpy(timeStr, ctime(&current_time));
        setcolor(RED);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
 
        moveto(midx, midy);
        /* print current time */
	outtext(timeStr);
	sound(2050);
	delay(20);
	nosound();
	/* Add delay of 1000 milliseconds(1 second) */
	delay(1000);
    }

    getch();
    closegraph();
}