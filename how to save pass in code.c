#include<stdio.h>
#include<windows.h>
#include<time.h>


void password();
void mainmenu(void);
void gotoxy(int x, int y);

 COORD coord ={0,0};
void gotoxy(int x,int y){

     coord.X=x;  coord.Y=y;

     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

char pin[10]={"M.T"};



int main()
{

password();
getch();
return 0;
}

void mainmenu()
{

    system("cls");

    printf("this is main menu");

}


void password(void){


system("cls");
system ("COLOR F2");
char ch,pass[10];
int i=0;
gotoxy(10,4);
printf("************************************Password Protected**************************************");
gotoxy(15,7);
printf("Enter password");

while(ch!=13){

    ch=getch();
    if(ch!=13 && ch!=8){
        putch('*');
        pass[i]= ch;
        i++;
    }
}
pass[i]='\0';
if(strcmp(pass,pin)==0){


    gotoxy(15,9);
    printf("Password match");
    gotoxy(17,10);
    printf("Press any key to countinue.....");
    getch();
        mainmenu();

}
else{
      gotoxy(17,10);
    printf("wrong passwrod");
    getch();
    password();
}

void mainmenu();



}


















