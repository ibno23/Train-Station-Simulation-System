#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>

// #include "clock.h"

#define STATION "Chattogram"



struct Train {
    int no;
    char name[40];
    char from[30];
    char to[30];
    int hour;
    int min;
} ;

void MXwin();         //MAX CONSOLE
void arrowhere(int, int);            //arrow for position
void hidecursor();                   //HideCursor
void gotoxy(int , int );             //coordination
void setColor(int);                  //Forcoloring
void box();                          //fram box
void arrowhere(int, int);
void drawDigit(int, int, int);       //BigDIGIT
void getTime(int *, int *, int *);
int remainingMin(int, int);
void Current_Date(int , int);
void drawBigTime();
void showClock();
void largeclock();
void aboutDeveloper();
int Load_Schedule();
void SchedulePanal();
void sorting(struct Train t[], int);
void adding_NEW_Train();
void choiec1();
void choiec2();
void choiec3();
void choiec4();
void choiec5();
void MainMenu();

void print_digit(char, int, int);
void print_letter(char, int ,int);

void zero(int, int);
void one(int, int);
void two(int, int);
void three(int, int);
void four(int, int);
void five(int, int);
void six(int, int);
void seven(int, int);
void eight(int, int);
void nine(int, int);


void colon(int, int);
void blink(int, int);

void showClock();

void getConsoleSize(int *width, int *height)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    *width  = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    *height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

void drawBox(int x, int y, int width, int height)
{
    int i;

    gotoxy(x, y);
    printf("+");
    for(i = 0; i < width - 2; i++) printf("-");
    printf("+");

    for(i = 1; i < height - 1; i++)
    {
        gotoxy(x, y + i);
        printf("|");
        gotoxy(x + width - 1, y + i);
        printf("|");
    }

    gotoxy(x, y + height - 1);
    printf("+");
    for(i = 0; i < width - 2; i++) printf("-");
    printf("+");
}


/* ================= BIG LETTERS ================= */

void letter_A(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("|  |");

        fflush(stdout);
    }
}
void letter_B(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__)");
        if(i==2)
            printf("|__)");

        fflush(stdout);
    }
}
void letter_C(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|   ");
        if(i==2)
            printf("|__ ");

        fflush(stdout);
    }
}
void letter_D(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" _  ");
        if(i==1)
            printf("| \\");
        if(i==2)
            printf("|_/");

        fflush(stdout);
    }
}
void letter_E(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__ ");
        if(i==2)
            printf("|__");

        fflush(stdout);
    }
}
void letter_F(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|_  ");
        if(i==2)
            printf("|   ");

        fflush(stdout);
    }
}
void letter_G(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("| _ ");
        if(i==2)
            printf("|__|");

        fflush(stdout);
    }
}
void letter_H(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("|  |");

        fflush(stdout);
    }
}
void letter_I(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" ");
        if(i==1)
            printf("|");
        if(i==2)
            printf("|");

        fflush(stdout);
    }
}
void letter_J(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   ");
        if(i==1)
            printf("  |");
        if(i==2)
            printf("__|");

        fflush(stdout);
    }
}
void letter_K(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   ");
        if(i==1)
            printf("|/");
        if(i==2)
            printf("|\\");

        fflush(stdout);
    }
}
void letter_L(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("   ");
        if(i==1)
            printf("|  ");
        if(i==2)
            printf("|__");

        fflush(stdout);
    }
}
void letter_M(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|\\/|");
        if(i==2)
            printf("|  |");

        fflush(stdout);
    }
}
void letter_N(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|\\ |");
        if(i==2)
            printf("| \\|");

        fflush(stdout);
    }
}
void letter_O(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|  |");
        if(i==2)
            printf("|__|");

        fflush(stdout);
    }
}
void letter_P(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__)");
        if(i==2)
            printf("|   ");

        fflush(stdout);
    }
}
void letter_Q(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("| _|");
        if(i==2)
            printf("|__%c", 191);

        fflush(stdout);
    }
}
void letter_R(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("|  \\");

        fflush(stdout);
    }
}
void letter_S(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__ ");
        if(i==2)
            printf(" __|");

        fflush(stdout);
    }
}
void letter_T(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" ___");
        if(i==1)
            printf("  | ");
        if(i==2)
            printf("  | ");

        fflush(stdout);
    }
}
void letter_U(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|  |");
        if(i==2)
            printf("|__|");

        fflush(stdout);
    }
}
void letter_V(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("\\  /");
        if(i==2)
            printf(" \\/ ");

        fflush(stdout);
    }
}
void letter_W(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|  |");
        if(i==2)
            printf("|/\\|");

        fflush(stdout);
    }
}
void letter_X(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf(" \\/");
        if(i==2)
            printf(" /\\");

        fflush(stdout);
    }
}
void letter_Y(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("\\ /");
        if(i==2)
            printf(" |  ");

        fflush(stdout);
    }
}
void letter_Z(int x, int y)    ////ALPHAPET
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("  / ");
        if(i==2)
            printf(" /_");

        fflush(stdout);
    }
}

// blank space for space character
void letter_blank(int x, int y)
{
    gotoxy(x, y);   printf("    ");
    gotoxy(x, y+1); printf("    ");
    gotoxy(x, y+2); printf("    ");
}

/* ============== CHARACTER DISPATCHER ============== */

void drawChar(char ch, int x, int y)
{
    switch(ch)
    {
         case 'A':
        case 'a':
            letter_A(x, y);
            break;

        case 'B':
        case 'b':
            letter_B(x, y);
            break;

        case 'C':
        case 'c':
            letter_C(x, y);
            break;

        case 'D':
        case 'd':
            letter_D(x, y);
            break;

        case 'E':
        case 'e':
            letter_E(x, y);
            break;

        case 'F':
        case 'f':
            letter_F(x, y);
            break;\

        case 'G':
        case 'g':
            letter_G(x, y);
            break;

        case 'H':
        case 'h':
            letter_H(x, y);
            break;

        case 'I':
        case 'i':
            letter_I(x, y);
            break;

       case 'J':
        case 'j':
            letter_J(x, y);
            break;

       case 'K':
        case 'k':
            letter_K(x, y);
            break;

      case 'L':
        case 'l':
            letter_L(x, y);
            break;

        case 'M':
        case 'm':
            letter_M(x, y);
            break;

        case 'N':
        case 'n':
            letter_N(x, y);
            break;

        case 'O':
        case 'o':
            letter_O(x, y);
            break;

        case 'P':
        case 'p':
            letter_P(x, y);
            break;

        case 'Q':
        case 'q':
            letter_Q(x, y);
            break;

        case 'R':
        case 'r':
            letter_R(x, y);
            break;

        case 'S':
        case 's':
            letter_S(x, y);
            break;

        case 'T':
        case 't':
            letter_T(x, y);
            break;

        case 'U':
        case 'u':
            letter_U(x, y);
            break;

        case 'V':
        case 'v':
            letter_V(x, y);
            break;

        case 'W':
        case 'w':
            letter_W(x, y);
            break;

        case 'X':
        case 'x':
            letter_X(x, y);
            break;

        case 'Y':
        case 'y':
            letter_Y(x, y);
            break;

        case 'Z':
        case 'z':
            letter_Z(x, y);
            break;
        case ' ':
            letter_blank(x, y); // space
            break;

        default:
            letter_blank(x, y);
    }
}

/* ============== DRAW WHOLE STRING ============== */

void drawString(const char *text, int startX, int startY)
{
    int x = startX;

    for(int i = 0; text[i] != '\0'; i++)
    {
        if (x >= 0 && x < 120)   // ✅ SAFE boundary
        {
            drawChar(text[i], x, startY);
        }
        x += 5;
    }
}


/* ============== SOUND ============== */

void playSound() {
    Beep(750, 300);
    Sleep(100);
    Beep(850, 300);
}

/* ============== SCROLLING ANNOUNCEMENT ============== */

void showAnnouncement(const char *text)
{
    system("cls");

    int pos = 80;
    int startY = 8;
    int textWidth = strlen(text) * 5;

    while (pos + textWidth > 0)
    {
        system("cls");
        int cw, ch;
getConsoleSize(&cw, &ch);

int panelWidth = 61;              // length of ===== line
int panelX = (cw - panelWidth) / 2;
int panelY = 1;                   // top position



        /* GREEN PANEL */
        setColor(10);

gotoxy(panelX, panelY);
printf("=============================================================");

gotoxy(panelX, panelY + 1);
printf("                    ANNOUNCEMENT PANEL                       ");

gotoxy(panelX, panelY + 2);
printf("=============================================================");

setColor(7);


        /* RED ANNOUNCEMENT TEXT */
        setColor(12);
        drawString(text, pos, startY);

        /* RESET COLOR */
        setColor(7);

        if (pos % 10 == 0)
            playSound();

        Sleep(80);
        pos--;

        if (kbhit())
        {
            if (getch() == 27)
                break;
        }
    }

    setColor(7);
    printf("\n\nPress any key to return...");
    getch();
}



/* ============== MENU ============== */

void showMenu()
{
    system("cls");

    int cw, ch;
    getConsoleSize(&cw, &ch);

    int boxWidth  = 55;
    int boxHeight = 13;

    int startX = (cw - boxWidth) / 2;
    int startY = (ch - boxHeight) / 2;

    drawBox(startX, startY, boxWidth, boxHeight);

    gotoxy(startX + 12, startY + 1);
    printf("TRAIN STATION ANNOUNCEMENT");

    gotoxy(startX + 2, startY + 3);
    printf("1. Train delayed (Platform 2)");

    gotoxy(startX + 2, startY + 4);
    printf("2. Keep luggage with you");

    gotoxy(startX + 2, startY + 5);
    printf("3. Ready for boarding (Dhaka)");

    gotoxy(startX + 2, startY + 6);
    printf("4. Stand behind yellow line");

    gotoxy(startX + 2, startY + 7);
    printf("5. Next train arriving shortly");

    gotoxy(startX + 2, startY + 9);
    printf("Press 1-5 to make announcement");

    gotoxy(startX + 2, startY + 10);
    printf("Press ESC to exit");
}


/* ============== MAIN ============== */

void ancmnt() {
    char choice;

    while(1) {
        showMenu();
        choice = getch();

        if(choice == 27) {
            system("cls");
            printf("Exiting system...\n");
            Sleep(1000);
            break;
        }

        switch(choice) {
            case '1':
                showAnnouncement("ATTENTION TRAIN DELAYED");
                break;

            case '2':
                showAnnouncement("KEEP YOUR LUGGAGE WITH YOU");
                break;

            case '3':
                showAnnouncement("TRAIN READY FOR BOARDING");
                break;

            case '4':
                showAnnouncement("STAND BEHIND YELLOW LINE");
                break;

            case '5':
                showAnnouncement("NEXT TRAIN ARRIVING SHORTLY");
                break;

            default:
                Beep(400, 300);
        }
    }

}



void aboutDeveloper() {
    //HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    hidecursor();
    char b;
          // printf("                                                                                                                     \n");
           printf("\n"); //skip1Line
           printf("   %c-----------------------------------------------------------------------------------------------------------------%c\n", 218, 191);

           printf("   |                                                       ");setColor(12);    printf("ABOUT"); setColor(7);printf("                                                     |\n");
           printf("   |-----------------------------------------------------------------------------------------------------------------|\n");
           printf("   |                                                                                                                 |\n");
           printf("   |                PROJECT TITLE:");setColor(11); printf(" TRAIN STATION SIMULATION SYSTEM"); setColor(7);printf("                                                   |\n");
           printf("   |                FEATURES :                                                                                       |\n");
           printf("   |                1. Digital clock with animation as the main interface which runs continuously in 24-hour format. |\n");
           printf("   |                2. Train schedule management                                                                     |\n");
           printf("   |                 - Add and edit arrival / departure times.                                                       |\n");
           printf("   |                3. Automated Announcements & alerts                                                              |\n");
           printf("   |                 - Audio alert for train arrival, delays and boarding.                                           |\n");
           printf("   |                4.'About' Section - Displays details of the project.                                             |\n");
           printf("   |                5.'Exit' Option  - Closes the program safely.                                                    |\n");
           printf("   |                                                                                                                 |\n");
           printf("   | "); setColor(12);    printf(" This project will combine concepts of time handling, file management and multimedia integration in C. It "); setColor(7);printf("      |\n");
           printf("   | "); setColor(12);    printf("  aims to demonstrate practical applications of programming in real-world scenarios like railway systems."); setColor(7);printf("       |\n");
           printf("   |-----------------------------------------------------------------------------------------------------------------|\n");
           printf("   |                                                     ");setColor(11);  printf("DEVELOPERS"); setColor(7);printf("                                                  |\n");
           printf("   |-----------------------------------------------------------------------------------------------------------------|\n");
           printf("   |   ");setColor(10);    printf(" NAME: Mohammed Al Mahamud Alam                 "); setColor(7);printf("  |     ");     setColor(10);    printf("NAME: Amir Foysal"); setColor(7);printf("                                     |\n");
           printf("   |    METRIC ID : C253061                              |     METRIC ID : C253101                                   |\n");
           printf("   |    International Islamic University Chittagong      |     International Islamic University Chittagong           |\n");
           printf("   |_____________________________________________________|___________________________________________________________|\n");
           printf("   |                                                     |                                                           |\n");
           printf("   |   ");setColor(10);    printf(" NAME: Mohammed Tanvirul Islam                  "); setColor(7);printf("  |     ");     setColor(10);    printf("NAME: Mohammed Ismail Hossain");setColor(7);printf("                         |\n");
           printf("   |    METRIC ID : C253090                              |     METRIC ID : C253060                                   |\n");
           printf("   |    International Islamic University Chittagong      |     International Islamic University Chittagong           |\n");
           printf("   |_____________________________________________________|___________________________________________________________|\n");







while(1)
{
    if(kbhit())
    {
        b = getch();
        if(b == 27)
        {
            system("cls");
            return;
        }
    }
}

}

/*
 __
|  |
|__|
*/

void zero(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|  |");
        if(i==2)
            printf("|__|");

    }

}

 /*
     |
     |
*/

void one(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("  | ");
        if(i==2)
            printf("  | ");

    }
}

/*
 __
 __|
|__
*/

void two(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf(" __|");
        if(i==2)
            printf("|__ ");

    }
}

/*
 __
 __|
 __|
*/

void three(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf(" __|");
        if(i==2)
            printf(" __|");

    }
}

/*

|__|
   |
*/

void four(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf("    ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("   |");

    }
}

/*
 __
|__
 __|
*/

void five(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__ ");
        if(i==2)
            printf(" __|");

    }
}

/*
 __
|__
|__|
*/

void six(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__ ");
        if(i==2)
            printf("|__|");

    }
}

/*
 __
   |
   |
*/

void seven(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("   |");
        if(i==2)
            printf("   |");

    }
}

/*
 __
|__|
|__|
*/

void eight(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf("|__|");

    }
}

/*
 __
|__|
 __|

*/

void nine(int x, int y)
{
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);

        if(i==0)
            printf(" __ ");
        if(i==1)
            printf("|__|");
        if(i==2)
            printf(" __|");

    }
}

/*

 .
 .
*/

 void colon(int x, int y)
 {
    int i;
    for(i=0; i<3; i++)
    {
        gotoxy( x, y+i);
        if(i==0)
            printf("   ");
        if(i==1)
            printf(" . ");
        if(i==2)
            printf(" . ");

        //fflush(stdout);
    }
 }


void hidecursor()    ////HIDE CURSOR
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void gotoxy(int x, int y)    //Coordinations
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}



void MXwin(void)    ////MAX CONSOLE
{
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MAXIMIZE);
}

void box()    ////FRAME BOX
{
   // SetColor(9);
    int i, j,TopBottomLines=110,Sidelines=29,x=0,y=0,a=0;

    for(i=0; i<=TopBottomLines+1; i++)    /////// TOP LINE
    {
        gotoxy(x+i, y);
        if(i==0)
        {
             printf("%c", 218); Sleep(a);
        }
        else if(i==TopBottomLines+1){
            printf("%c\n", 191); Sleep(a);
            }
        else
            printf("%c", 196); Sleep(a);
        fflush(stdout);
    }

    for(i=1; i<=Sidelines; i++)    /////// SIDE LINE
    {
        gotoxy(x, y+i);
        printf("%c", 179); Sleep(a);
        for(j=1; j<=TopBottomLines; j++)
            printf(" "); Sleep(a);
        printf("%c\n", 179);Sleep(a);
        fflush(stdout);
    }

    for(i=0; i<=TopBottomLines+1; i++)   /////// BOTTOM LINE
    {
        gotoxy(x+i, y+Sidelines);
        if(i==0)
        {
            printf("%c", 192);Sleep(a);
        }
        else if(i==TopBottomLines+1)
        {
            printf("%c\n", 217);Sleep(a);
        }
        else
        {
            printf("%c", 196);Sleep(a);
        }

    }
 }
int remainingMin(int trainArrivingTimeInHour, int trainArrivingTimeInMin)
{
    int ch, cm, cs;
    getTime(&ch, &cm, &cs);

    int current = ch* 60 + cm;
    int train = trainArrivingTimeInHour * 60 + trainArrivingTimeInMin;

    int remaining = train - current;

    if (remaining < 0)
        remaining += 24 * 60;   // next day handling

    return remaining;           //this function return remaining time in Minutes| LETER we need to convert it to hr:mn format
}
void sorting(struct Train t[20], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            int r1 = remainingMin(t[j].hour, t[j].min);
            int r2 = remainingMin(t[j+1].hour, t[j+1].min);

            if (r1 > r2)
            {
                struct Train temp = t[j];

                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
}




void formatTime(int minutes, int *h, int *m) {
    *h = minutes / 60;
    *m = minutes % 60;
}

int loadSchedule(struct Train t[]) {
    FILE *fp;
    fp = fopen("schedule.txt", "r");
    if (!fp) {
        printf("Error: schedule.txt not found!");
        Sleep(2000);
        return 0;
    }

    int count = 0;
    while (1)
{
    int result;

    result = fscanf(fp,"%d,%[^,],%[^,],%[^,],%d:%d", &t[count].no, t[count].name, t[count].from, t[count].to, &t[count].hour, &t[count].min);
            // fprintf(fp, "%d,%s,%s,%s,%02d:%02d
    if (result != 6)
    {
        break;   // stop reading full line happened
    }

    count++;    // reed next train
}


    fclose(fp);
    return count;
}

void SchedulePanal() {
    struct Train trains[20];
    int total = loadSchedule(trains);
    sorting(trains, total);

    int blink = 0;

    while (1) {
        system("cls");

        gotoxy(15,2);
        printf("%c======================================================================================================%c\n", 218, 191);//TopLine
        gotoxy(15,3);
      //printf("|      Train(No-Name)         |           Route           |     Time     |   Arrives In  |\n");
        printf("|      Train(No-Name)         |           Route           |     Time     |  Arrives In  |  Departs In  |\n");

        gotoxy(15,4);
        printf("|======================================================================================================|\n", 192, 217);
        //printf("BANGLADESH RAILWAY � TRAIN SCHEDULE\n\n");
        int r=0;
         for(int i =1; i<2*total+2; i++)
        {
            gotoxy(15,4+i); printf("|"); //1linr
            gotoxy(45,4+i); printf("|"); //2Line
            gotoxy(73,4+i); printf("|"); //3Line
            gotoxy(88,4+i); printf("|"); //4Line
            gotoxy(103,4+i); printf("|"); //4Line
            gotoxy(118,4+i); printf("|");//5LIne

        }
        gotoxy(15,2*total+6);
        printf("%c======================================================================================================%c\n", 192, 217);
        for (int i = 0; i < total; i++) {

            if (strcmp(trains[i].from, STATION) != 0 && strcmp(trains[i].to, STATION) != 0)
                continue;

            int rem = remainingMin(trains[i].hour, trains[i].min);
            int h = rem / 60;
            int m = rem % 60;

            if (rem <= 5) {
                if (blink)
                    setColor(12);   // red blink when <=5 min left to arrive or leave
                else
                    setColor(7);
            }
            else if (rem <= 10) {
                setColor(14);      // yellow
            }
            else {
                setColor(7);
            }
            int x=2*r;
            gotoxy(17,6+x);
            printf("%d-%-20s ", trains[i].no, trains[i].name);
            gotoxy(48,6+x);
            printf("%-7s -> %-10s", trains[i].from, trains[i].to);
            gotoxy(77,6+x);
            printf("%02d:%02d", trains[i].hour, trains[i].min);
            gotoxy(95,6+x);
            //printf("%02d:%02d\n", h, m);
            // determinating arriving or departin
        int isArriving = (strcmp(trains[i].to, STATION) == 0);
        int isDeparting = (strcmp(trains[i].from, STATION) == 0);

        // Arrives in column
        gotoxy(93, 6+x);
        if (isArriving)
            printf("%02d:%02d", h, m);
        else
            printf("  --  ");

        // Departs in column
        gotoxy(108, 6+x);
        if (isDeparting)
            printf("%02d:%02d", h, m);
        else
            printf("  --  ");

        r++;
        }

        setColor(7);
        hidecursor();
        gotoxy(98,2*total+7);
        printf("[ESC] : Back to Menu");
        char b;
        if(kbhit())
            {
            b=getch();
            if(b==27)
                {
                    system("cls");
                    return;
                }
            }

       blink=!blink;
        Sleep(800);
    }
}

void adding_NEW_Train()
{
    FILE *fp = fopen("schedule.txt", "a");
    struct Train t;

    if (!fp) {
        printf("File error!\n");
        return;
    }
    system("cls");
    //box();
    gotoxy(15,2);
    printf("%c==========================================================================%c\n", 218, 191);//TopLine
    gotoxy(15,3);
    printf("|                 TRAIN SCHEDULE - ADD NEW TRAIN                           |\n");

    for(int i=16;i<91;i++)
    {
        gotoxy(i,4);
        printf("%c\n", 196, 217);           // singleline
    }
    gotoxy(15,4);
    printf("%c", 192);                      //sofline
    gotoxy(90,4);
    printf("%c", 217);                      //eofline

    for(int i =1; i<=15; i++)
        {
            gotoxy(15,4+i); printf("|"); //leftLine
            gotoxy(90,4+i); printf("|"); //rightLine
        }
    for(int i=16;i<91;i++)
    {
        gotoxy(i,20);
        printf("%c\n", 196);                //bottomLine
    }
    gotoxy(15,20);
    printf("%c", 192);                      //sofbottomline
    gotoxy(90,20);
    printf("%c", 217);                      //eofbottomline

    //printf("BANGLADESH RAILWAY � TRAIN SCHEDULE\n\n");
    gotoxy(22,6);
    printf("Enter Train No     : ");
    scanf("%d", &t.no);

    gotoxy(22,8);
    printf("Enter Train Name   : ");
    scanf(" %[^\n]", t.name);

    gotoxy(22,10);
    printf("From               : ");
    scanf(" %[^\n]", t.from);

    gotoxy(22,12);
    printf("To                 : ");
    scanf(" %[^\n]", t.to);

    gotoxy(22,14);
    printf("Time (HH:MM)        : ");
    scanf("%d:%d",&t.hour, &t.min);

    gotoxy(22,19);
    setColor(12);
    printf("[ DELETE ] Cancel\n");

    gotoxy(70,19);
    setColor(10);
    printf("[ ENTER ] Save\n");

    char x;
    x=getch();
    if(x==13)
    {
        fprintf(fp, "%d,%s,%s,%s,%02d:%02d\n", t.no, t.name, t.from, t.to, t.hour, t.min);

    fclose(fp);
    gotoxy(22,19);
    printf("                 Train added successfully!                        \n");
    Sleep(1500);
    setColor(7);
    return;
    }
    else if(x==127)
    {
        fclose(fp);
        return;
    }

}

 void showClock(int x, int y)
{
    while(1)
    {
        time_t ft;
        struct tm *ftm;

        time(&ft);
        ftm = localtime(&ft);
        gotoxy(x, y);
       // system("color 60");
        printf("Time: %02d:%02d:%02d",ftm->tm_hour, ftm->tm_min, ftm->tm_sec);


      //Sleep(1000);
     // fflush(stdout);
    }
}

void drawDigit(int digit, int x, int y)
{
    switch(digit)
    {
        case 0: zero(x, y); break;
        case 1: one(x, y); break;
        case 2: two(x, y); break;
        case 3: three(x, y); break;
        case 4: four(x, y); break;
        case 5: five(x, y); break;
        case 6: six(x, y); break;
        case 7: seven(x, y); break;
        case 8: eight(x, y); break;
        case 9: nine(x, y); break;
    }
}

void getTime(int *h, int *m, int *s)
{
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    *h = tm->tm_hour;
    *m = tm->tm_min;
    *s = tm->tm_sec;
}

void drawBigTime(int x, int y)
{
    int h, m, s;
    getTime(&h, &m, &s);

    int h1 = h / 10;
    int h2 = h % 10;

    int m1 = m / 10;
    int m2 = m % 10;

    int s1 = s / 10;
    int s2 = s % 10;

   // int x = 10;   // start from left
   // int y = 10;   // top position
    int gap = 4; // space between digits

    drawDigit(h / 10, x, y);   x += gap;
    drawDigit(h % 10, x, y);   x += gap;

    colon(x, y); x += gap;

    drawDigit(m / 10, x, y);   x += gap;
    drawDigit(m % 10, x, y);   x += gap;

    colon(x, y); x += gap;

    drawDigit(s / 10, x, y);   x += gap;
    drawDigit(s % 10, x, y);
}
void largeclock(int x, int y)
{
    char b;
    while(1)
    {
       //// cleardevice();     // or system("cls")
        hidecursor();
        drawBigTime( x, y);
        if(kbhit())
            {
            b=getch();
            if(b==27)
                {
                    system("cls");
                    return;
                }
            }
      Sleep(100);

    }
}

void Current_Date(int x, int y)
{
    char *days[] = {"Sunday","Monday","Tuesday","Wednesday",
                    "Thursday","Friday","Saturday"};

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    gotoxy(x, y);
    printf("%02d/%02d/%04d (%s)",tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900, days[tm->tm_wday]);
}

void choiec1()

{

    struct Train trains[20];
    int total = loadSchedule(trains);

    if (total <= 0)
        return;

    sorting(trains, total);

    system("cls");
    hidecursor();
    //box();
        gotoxy(15,2);
        printf("%c=======================================================================%c\n", 218, 191);//TopLine
        gotoxy(26,3);
        printf("           BANGLADESH RAILWAY ~ CHITTAGONG\n");
        gotoxy(16,4);
        printf("=======================================================================\n", 218, 191);
        for(int i =1; i<20; i++)
        {
            gotoxy(15,2+i); printf("|"); //leftLine
            gotoxy(87,2+i); printf("|"); //rightLine
        }

        for(int i =0; i<5; i++)
        {
            gotoxy(55,5+i); printf("|"); //SeparationLineBetweenClock_and_Date
           // gotoxy(87,2+i); printf("|"); //rightLine
        }
        gotoxy(16,9);
        printf("=======================================================================\n", 218, 191);

        Current_Date(60,7);
        gotoxy(18,11);
        printf("Train No    : %d\n",trains[0].no);
        gotoxy(18,13);
        //printf(" %d-%s \n",Train[0].no, Train[0].mane);
        printf("Train Name  : %s ", trains[0].name);
        //printf("Status      : Arriving\n");
        if (strcmp(trains[0].to, STATION) == 0)
        {
            gotoxy(18,15);
            printf("Status      : Arriving\n");
        }
        else
        {
            gotoxy(18,15);
            printf("Status      : About to Depart\n");
        }
        gotoxy(18,17);
        if (total > 1)
            printf("Next Train  : %d-%s ", trains[1].no, trains[1].name);
        else
            printf("Next Train  : None");
        //printf("=======================================================================\n");//2mdBottomline
        gotoxy(15,22);
        printf("%c=======================================================================%c\n", 192, 217);//Bottomline
        gotoxy(18,20);
        printf("Next Announcement in progress.... ");
        gotoxy(68,21);
        printf("ESC : Back to Menu");
        largeclock(18,5);
        //gotoxy(37,20);
       // choice = getch();
}

void MainMenu()
    {


        char choice;

        while (1)
        {
            system("cls");
            //box();
            gotoxy(15,2);
            printf("%c=======================================================================%c\n", 218, 191);//TopLine
            gotoxy(26,3);
            printf("           RAILWAY STATION SIMULATION\n");
            gotoxy(16,4);
            printf("=======================================================================\n", 218, 191);
            for(int i =1; i<20; i++)
            {
                gotoxy(15,2+i); printf("|"); //leftLine
                gotoxy(87,2+i); printf("|"); //rightLine
            }
            gotoxy(18,7);
            printf("1. Start Live Station Display\n");
            gotoxy(18,9);
            printf("2. View Train Schedule\n");
            gotoxy(18,11);
            printf("3. Add Train\n");
            gotoxy(18,13);
            printf("4. Manual Announcement\n");
            gotoxy(18,15);
            printf("5. About\n");
            gotoxy(18,17);
            printf("6. Exit\n");
            gotoxy(16,18);
            printf("=======================================================================\n");//2mdBottomline
            gotoxy(15,22);
            printf("%c=======================================================================%c\n", 192, 217);//Bottomline
            gotoxy(18,20);
            printf("Enter your choice: ");
            gotoxy(37,20);
            choice = getch();

    switch (choice) {
        case '1':choiec1();break;
        case '2':SchedulePanal();break;
        case '3':adding_NEW_Train();break;
        case '4': ancmnt();break;
        case '5':aboutDeveloper();break;
        case '6': system("cls"); exit(0);
        default:
            gotoxy(60,20);
            printf("\033[31m");
            printf("Invalid choice!");
            Sleep(500);gotoxy(60,20);printf("                     ");
            printf("\033[0m");

                }
        }
    }

int main()
{
   // MXwin();
   //// hidecursor();
   //// box();

    MainMenu();
    return 0;
}
