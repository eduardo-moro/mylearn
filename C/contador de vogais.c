#include <stdio.h>
#include <string.h>

int qtdchar(char texto[81],char v[]){
  int i,ii = 0;
  int cnt = 0;
  int l = strlen(texto);
  l--;    int ll = strlen(v);
  for(i = 0; i <= l; i++) {
    for (ii = 0; ii <= ll; ii++){
      if(texto[i] == v[ii]) {
        cnt++;
      }
    }
  };
  return cnt;
}

int main (){
  char texto[81] = {""};
  int i,l,linha = 0;
  int abc;
  int qtd;
  char v[] = {"AaEeIiOoUu"};
  char e[] = {" !@#$%&*\()\[]\{}'\"\\/€®ŧ←↓→øþłĸŋđðßæ«»©“”µ,.;<>:~^0123456789\r"};
  scanf("%i",&linha);
  if(linha < 1001) {
    for(i = -1; i < linha; i++) {
      fgets(texto,80,stdin);
      qtd = qtdchar(texto,v);
      l = strlen(texto);
      l--;
      if(l > 80) {
        l = 80;
      }
      abc = (l - qtd - qtdchar(texto,e));
      if (i > -1) {
        printf("%d  ",qtd);
        printf("%d",abc);
        if (i < (linha - 1)){
          printf("\n");

        }
      }
    }
  }}
