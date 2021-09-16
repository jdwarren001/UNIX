# Making Nano

### Code
    #include <iostream>
    #include <vector>
    #include <ctime>

    using namespace std;

    vector<int> values;

    int main() {
        srand(time(NULL));
        for (int i = 0; i<100; i++)
            values.push_back(rand()%1000);

        for(unsigned i=0; i<values.size; i++)
            cout << values[i] << ", ";
        cout << (char)7 << endl;

        for(unsigned i=0; i<values.size; i++)
            cout << values[i] << ", ";
        cout << endl;
    }



## Curses Library
    Essential for making Nano interface

    - Simple ncurses example
    - Paulgriffith.net


## Code
    /*

    CURHELLO.C
    ==========
    (c) Copyright Paul Griffiths 1999
    Email: mail@paulgriffiths.net

    "Hello, world!", ncurses style.

    */


    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>                  /*  for sleep()  */
    #include <curses.h>


    int main(void) {

        WINDOW * mainwin;

    
    /*  Initialize ncurses  */

    if ( (mainwin = initscr()) == NULL ) {
	fprintf(stderr, "Error initialising ncurses.\n");
	exit(EXIT_FAILURE);
    }

    noecho();
    keypad(mainwin, TRUE);
    start_color();

    /*  Display "Hello, world!" in the centre of the
	screen, call refresh() to show our changes, and
	sleep() for a few seconds to get the full screen effect  */

    //Now add cool functions here from curses

    class Cursor (x, y) {

    };

    if ( has_colors()) {

        int n = 1;

        init_pair(1,  COLOR_RED,     COLOR_BLACK);
        init_pair(2,  COLOR_GREEN,   COLOR_BLACK);
        init_pair(3,  COLOR_YELLOW,  COLOR_BLACK);
        init_pair(4,  COLOR_BLUE,    COLOR_BLACK);
        init_pair(5,  COLOR_MAGENTA, COLOR_BLACK);
        init_pair(6,  COLOR_CYAN,    COLOR_BLACK);
        init_pair(7,  COLOR_BLUE,    COLOR_WHITE);
        init_pair(8,  COLOR_WHITE,   COLOR_RED);
        init_pair(9,  COLOR_BLACK,   COLOR_GREEN);
        init_pair(10, COLOR_BLUE,    COLOR_YELLOW);
        init_pair(11, COLOR_WHITE,   COLOR_BLUE);
        init_pair(12, COLOR_WHITE,   COLOR_MAGENTA);
        init_pair(13, COLOR_BLACK,   COLOR_CYAN);

        while ( n <= 13 ) {
            color_set(n, NULL);
            mvaddstr(6 + n, 32, " Hello, world! ");
            n++;
        }
    }

    bool done = false;
    while (!done) {
        mvaddstr(13, 33, "Hello, world!");
        mvaddstr(0,0,"Jackson was here");
        refresh();
        int ch=getch();
        if(ch==KEY_DOWN) c.y++;
        else if(ch==KEY_UP c.y--;
        else if(ch==KEY_RIGHT c.x++;
        else if(ch==KEY_LEFT c.x--;
        else if(ch==27) done=true;
    }


    /*  Clean up after ourselves  */

    delwin(mainwin);
    endwin();
    refresh();

    return EXIT_SUCCESS;
    }