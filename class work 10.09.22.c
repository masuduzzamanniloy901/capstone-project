#include<windows.h>
#include<time.h>
#include<stdio.h>


void password();
void mainmenu(void);
void gotoxy(int x, int y);
void addbooks(void);
void deletebooks(void);
void editbooks(void);
void searchbooks(void);
void issuebooks(void);
void viewbooks(void);






COORD coord = {0,0};
void gotoxy(int x,int y)
{

    coord.X=x;
    coord.Y=y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

char pin[10]= {"M.T"};



int main()
{

    password();
    getch();
    return 0;
}


void password(void)
{


    system("cls");
    system ("COLOR F2");
    char ch,pass[10];
    int i=0;
    gotoxy(10,4);
    printf("************************************Password Protected**************************************");
    gotoxy(15,7);
    printf("Enter password");

    while(ch!=13)
    {

        ch=getch();
        if(ch!=13 && ch!=8)
        {
            putch('*');
            pass[i]= ch;
            i++;
        }
    }
    pass[i]='\0';
    if(strcmp(pass,pin)==0)
    {


        gotoxy(15,9);
        printf("Password match");
        gotoxy(17,10);
        printf("Press any key to countinue.....");
        getch();
        mainmenu();

    }
    else
    {
        gotoxy(17,10);
        printf("wrong passwrod");
        getch();
        password();
    }
}
void mainmenu()
{
    system("cls");
    system(" COLOR F4");

    gotoxy(20,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Main Menu");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20,5);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 1. add Books:");

    gotoxy(20,6);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 2. delete Books:");

    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 3. edit Books:");

    gotoxy(20,8);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 4. search Books:");

    gotoxy(20,9);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 5. issue Books:");

    gotoxy(20,10);
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 6. view Books:");

}








