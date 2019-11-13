#include<stdio.h>
#include<string.h>

int dif = 0;
char mat[4][4];
/*
esta função preenche a posição informada pelos
parâmetros lin (linha) e col (coluna) com ‘X’ ou ‘O’ que são passados para a função através de
parâmetro jog. A função retorna um dos seguintes valores:
0 – se a jogada é válida;
1 – se a posição informada é inválida;
2 – se a posição informada já está preenchida.
*/
int jogada_usuario(int lin,int col, char jog){
    char null = ' ';
    if (strcmp(mat[lin][col],null)){
    return 0;
   }else
    if ((mat[lin][col] == 'x')||(mat[lin][col] == 'o')){
    return 2;
   }else
    return 1;
};

/*
esta função realiza a jogada do computador. O
parâmetro jog define se o computador é ‘X’ ou ‘O’ e o parâmetro nível define se a jogada do
computador é de nível básico, intermediário ou avançado. Você deve criar uma função para jogada
nível básico do computador; outra função para a jogada nível intermediário do computador; e outra
função para a jogada nível avançado do computador. Estas funções deverão ser chamadas dentro
desta função jogada_computador.
*/
void jogada_computador(char jog, int nivel){
};
/*
esta função retorna 1 se o usuário quer jogar contra o computador ou 2 caso o
usuário queira jogar contra outro usuário. Caso o usuário queira jogar contra o computador ele
também deve escolher o nível da jogada do computador: básico, intermediário ou avançado.
*/
int menu( ){
    int opc = 0;
    printf("1. jogar homem versus homem\n");
    printf("2. jogar homem versus máquina\n");
     scanf("%d",&opc);
        switch (opc){
        case '1': inicializa_velha();break;
        case '2': printf("escolha a dificuldade mortal:\n")
                  printf("1. fácil.\n");
                  printf("2. média..\n");
                  printf("3. difícil...\n");break;
                   scanf("%d",&opc);
                  switch("%d",&opc){
                  case '1':dif = 1;break;
                  case '2':dif = 2;break;
                  case '3':dif = 3;break;
                   default printf("entrada inválida");//loop na main
                  }
        default printf("entrada inválida");//loop na main
    }

};

/*
esta função define via entrada do usuário quem é
o jogador ‘X’ e quem é o jogador ‘O’.
*/
void escolha_simb(char *jog1, char *jog2){
};

/*
 esta função inicializa a matriz do jogo da velha com vazio.
*/
void inicializa_velha(){
};

/*
 esta função retorna 1 se o jogador ganhou e zero caso
contrário. O parâmetro jog conterá ‘X’ ou ‘O’.
*/
int verifica_ganhador(char jog){
};

//Criar uma função que grava em um arquivo txt as informações abaixo, no seguinte formato:
//Nome do Jogador 1; símbolo; Nome do Jogador 2; símbolo.
//Exemplo: Maria; X; José; 0.

//

//Criar uma função que grava em um arquivo binário uma partida do Jogo da Velha. Os dados
//devem ser gravados utilizando a seguinte estrutura:
//typedef struct Velha
//{
//int partida; /*número da partida (Ex: primeira(1), segunda(2), terceira(3), ….,
//partida)*/
//char JogVelha[3][3]; // Tabuleiro do jogo. Armazenará as jogadas
//char resultado; // Resultado da Partida: X, 0 ou V(equivale a Velha - empate)
//} Partida;
//A função deve ter como entrada os seguintes parâmetros: (1) parâmetro string com o nome
//do arquivo; (2) parâmetro Partida com os dados da partida. A função retorna 1 se a gravação
//for um sucesso e zero caso contrário.
//Os jogadores podem jogar quantas partidas desejarem. Ao final de cada partida esta função
//deve ser chamada para gravar os dados da partida no arquivo.

//

//Criar uma função que lê do arquivo binário os dados de uma determinada partida. A função deve
//ter como entrada os seguintes parâmetros: (1) parâmetro string com o nome do arquivo; (2)
//parâmetro inteiro com o número da partida a ser lida. A função retorna o registro com os dados da
//partida que foi lida.

//

//Criar uma função que imprime na tela todas as partidas (tabuleiros com as respectivas jogadas
//e quem ganhou) e o placar final (Ex: Maria 10 X José 5) A Maria foi a campeã do Campeonato de
//Jogo da Velha!!!

//

//Utilize a criatividade para implementar o layout da impressão na tela.
//Observação: Esta função deve obrigatoriamente ler todos os dados do arquivo binário e do arquivo
//txt para realizar a impressão final do Campeonato!

//OBSERVAÇÃO 1: VOCÊ PODERÁ CRIAR OUTRAS FUNÇÕES CASO DESEJAR, MAS A
//CRIAÇÃO DAS FUNÇÕES DEFINIDAS ACIMA É OBRIGATÓRIA. CASO ALGUMA DAS FUNÇÕES
//ACIMA NÃO FOR CRIADA IMPLICARÁ EM PERDA DE NOTA.
//OBSERVAÇÃO 2: AS EQUIPES DEVEM SER FORMADAS POR DOIS ALUNOS OU UM. OS
//NOMES DOS INTEGRANTES DA EQUIPE DEVEM SER INFORMADOS NO MOODLE, NO
//FÓRUM ABERTO NA DISCIPLINA, ATÉ O DIA 01 DE NOVEMBRO DE 2018.
//OBSERVAÇÃO 3: O CRONOGRAMA DE DEFESAS SERÁ DIVULGADO ATÉ O DIA 19/11/2019.
//CUIDADO !!!!!!!!!
//EM CASO DE CÓPIA TODOS AS EQUIPES ENVOLVIDAS RECEBERÃO NOTA ZERO
