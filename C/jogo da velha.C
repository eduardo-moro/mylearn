
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN 1
#include <winsock2.h>
#include <windows.h>
#else
#include <sys/ioctl.h>
#endif

char nome_jog1[8],nome_jog2[8];
int linha,coluna;
int players;

#ifdef _WIN32
void clear() {
system ("cls");
}
#else
void clear() {
system("clear");
}
#endif

#ifdef __linux__
void gotoxy(int x,int y) {
printf("%c[%d;%df",0x1B,y,x);
}
char getch() {
char ch;
system ("/bin/stty raw");
ch = getc(stdin);
system ("/bin/stty cooked");
return ch;

}
#else
void gotoxy(int x, int y) {
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD) {
  x-1,y-1
});
}
#endif

#ifdef __linux__
int termy() {
int lines;
#ifdef TIOCGSIZE
struct ttysize ts;
ioctl(STDIN_FILENO, TIOCGSIZE, &ts);
lines = ts.ts_lines;
#elif defined(TIOCGWINSZ)
struct winsize ts;
ioctl(STDIN_FILENO, TIOCGWINSZ, &ts);
lines = ts.ws_row;
#endif /* TIOCGSIZE */
return lines;
}

int termx() {
int cols;
#ifdef TIOCGSIZE
struct ttysize ts;
ioctl(STDIN_FILENO, TIOCGSIZE, &ts);
cols = ts.ts_cols;
#elif defined(TIOCGWINSZ)
struct winsize ts;
ioctl(STDIN_FILENO, TIOCGWINSZ, &ts);
cols = ts.ws_col;
#endif
return cols;
}
#else
int termx() {
return 120;
}
int termy() {
return 28;
}
#endif

int inicializa_velha() {
gotoxy((termx()/2-6),(termy()/2-3));
printf("+---+---+---+");
gotoxy((termx()/2-6),(termy()/2-3)+1);
printf("|   |   |   |");
gotoxy((termx()/2-6),(termy()/2-3)+2);
printf("+---+---+---+");
gotoxy((termx()/2-6),(termy()/2-3)+3);
printf("|   |   |   |");
gotoxy((termx()/2-6),(termy()/2-3)+4);
printf("+---+---+---+");
gotoxy((termx()/2-6),(termy()/2-3)+5);
printf("|   |   |   |");
gotoxy((termx()/2-6),(termy()/2-3)+6);
printf("+---+---+---+");
}

int jogada_usuario(int col,int lin,char jog) {
char ent;
lin = 0;
col = 0;
do {

  ent = getch();

  if(ent == 's') {
    lin++;
  }
  if(ent == 'w') {
    lin--;
  }
  if(ent == 'd') {
    col++;
  }
  if(ent == 'a') {
    col--;
  }
  if (lin <= 0) {
    lin = 3;
  }
  if (lin >= 4) {
    lin = 1;
  }
  if (col <= 0) {
    col = 3;
  }
  if (col >= 4) {
    col = 1;
  }

  clear();
  inicializa_velha();

  gotoxy((termx()/2-8+(col*4)),(termy()/2-4+(lin*2)));

} while(ent != 'o');
printf("%c",jog);
return 0;
}




int menu() {
int pos = 1;
char ent;
clear();
do {
  clear();
  gotoxy(termx()/2-5,termy()/2-2);
  printf("one  player");
  gotoxy(termx()/2-5,termy()/2-1);
  printf("two players");
  gotoxy(termx()/2-2,termy()/2);
  printf("exit");
  gotoxy(termx(),termy());

  if(ent == 's') {
    pos++;
  }
  if(ent == 'w') {
    pos--;
  }
  if (pos == 0) {
    pos = 3;
  }
  if (pos == 4) {
    pos = 1;
  }
  if(pos == 1) {
    gotoxy(termx()/2+7,termy()/2-2);
    printf("+");
    gotoxy(termx()/2-7,termy()/2-2);
    printf("+");
    gotoxy(termx(),termy());
  } else if(pos == 2) {
    gotoxy(termx()/2+7,termy()/2-1);
    printf("+");
    gotoxy(termx()/2-7,termy()/2-1);
    printf("+");
    gotoxy(termx(),termy());
  } else if(pos == 3) {
    gotoxy(termx()/2+7,termy()/2);
    printf("+");
    gotoxy(termx()/2-7,termy()/2);
    printf("+");
    gotoxy(termx(),termy());
  }
  ent = getch();
} while(ent != 'o');
clear();
return pos;
}

int menudif() {
int pos = 1;
char ent;
clear();
do {
  clear();
  gotoxy(termx()/2-2,termy()/2-2);
  printf("hard");
  gotoxy(termx()/2-3,termy()/2-1);
  printf("medium");
  gotoxy(termx()/2-2,termy()/2);
  printf("easy");
  gotoxy(termx()/2-2,termy()/2+1);
  printf("back");
  gotoxy(termx(),termy());
  ent = getch();
  if(ent == 's') {
    pos++;
  }
  if(ent == 'w') {
    pos--;
  }
  if (pos == 0) {
    pos = 4;
  }
  if (pos == 5) {
    pos = 1;
  }
  if(pos == 1) {
    gotoxy(termx()/2+7,termy()/2-2);
    printf("+");
    gotoxy(termx()/2-7,termy()/2-2);
    printf("+");
  } else if(pos == 2) {
    gotoxy(termx()/2+7,termy()/2-1);
    printf("+");
    gotoxy(termx()/2-7,termy()/2-1);
    printf("+");
  } else if(pos == 3) {
    gotoxy(termx()/2+7,termy()/2);
    printf("+");
    gotoxy(termx()/2-7,termy()/2);
    printf("+");
  }
  if(pos == 4) {
    gotoxy(termx()/2+7,termy()/2+1);
    printf("+");
    gotoxy(termx()/2-7,termy()/2+1);
    printf("+");
  }
} while(ent != 'o');
clear();
return pos;
}

int name(char player[8]) {

}

void end() {
clear();
gotoxy(termx()/2-6,termy()/2+6);
printf(" that\'s okay ");
gotoxy(termx()/2-1,termy()/2+7);
printf("end");
gotoxy(termx(),termy());
system("exit");
}

int main() {
char simb;
int i = 0;
clear();
do {
  clear();
  gotoxy(termx()/2-17,2);
  printf("codigo criado por eduardo e murilo");
  gotoxy(termx()/2-22,termy()-1);
  printf("controles: wasd movem o cursor, \"o\" seleciona");
  players = menu();
  if((players != 1) && (players != 2) && (players != 3)) {
    clear();
    gotoxy(termx()/2-9,termy()/2-3);
    printf("entrada incorreta");
    gotoxy(termx()/2-8,termy()/2-2);
    printf("tente novamente");
  }

  clear();
  if(players == 3) {
    system("exit");
  }
} while ((players != 1) && (players != 2));

if(players == 1) {
  if(menudif() == 4) {
    clear();
    main();
  }
} else if(players == 2) {

  gotoxy(termx()/2-16,termy()/2);
  printf("pressione uma tecla para começar");

  do {
    jogada_usuario(linha,coluna,'o');
    i++;
  } while(i<10);

}

end();
}
