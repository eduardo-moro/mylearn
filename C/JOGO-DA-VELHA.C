/*
esta fun��o preenche a posi��o informada pelos
par�metros lin (linha) e col (coluna) com �X� ou �O� que s�o passados para a fun��o atrav�s de
par�metro jog. A função retorna um dos seguintes valores:
0 � se a jogada � v�lida;
1 � se a posi��o informada � inv�lida;
2 � se a posi��o informada j� est� preenchida.
*/

/*
esta fun��o realiza a jogada do computador. O
par�metro jog define se o computador � �X� ou �O� e o par�metro n�vel define se a jogada do
computador � de n�vel b�sico, intermedi�rio ou avan�ado. Voc� deve criar uma fun��o para jogada
n�vel b�sico do computador; outra fun��o para a jogada n�vel intermedi�rio do computador; e outra
fun��o para a jogada n�vel avan�ado do computador. Estas fun��es dever�o ser chamadas dentro
desta fun��o jogada_computador.
*/

/*
esta fun��o retorna 1 se o usu�rio quer jogar contra o computador ou 2 caso o
usu�rio queira jogar contra outro usu�rio. Caso o usu�rio queira jogar contra o computador ele
tamb�m deve escolher o n�vel da jogada do computador: b�sico, intermedi�rio ou avan�ado.
*/
/*
esta fun��o define via entrada do usu�rio quem �
o jogador �X� e quem � o jogador �O�.
*/

/*
 esta fun��o inicializa a matriz do jogo da velha com vazio.
*/

/*
 esta fun��o retorna 1 se o jogador ganhou e zero caso
contr�rio. O par�metro jog conter� �X� ou �O�.
*/

//Criar uma fun��o que grava em um arquivo txt as informa��es abaixo, no seguinte formato:
//Nome do Jogador 1; s�mbolo; Nome do Jogador 2; s�mbolo.
//Exemplo: Maria; X; Jos�; 0.

//

//Criar uma fun��o que grava em um arquivo bin�rio uma partida do Jogo da Velha. Os dados
//devem ser gravados utilizando a seguinte estrutura:
//typedef struct Velha
//{
//int partida; /*n�mero da partida (Ex: primeira(1), segunda(2), terceira(3), �.,
//partida)*/
//char JogVelha[3][3]; // Tabuleiro do jogo. Armazenar� as jogadas
//char resultado; // Resultado da Partida: X, 0 ou V(equivale a Velha - empate)
//} Partida;
//A fun��o deve ter como entrada os seguintes par�metros: (1) par�metro string com o nome
//do arquivo; (2) par�metro Partida com os dados da partida. A fun��o retorna 1 se a grava��o
//for um sucesso e zero caso contr�rio.
//Os jogadores podem jogar quantas partidas desejarem. Ao final de cada partida esta fun��o
//deve ser chamada para gravar os dados da partida no arquivo.

//

//Criar uma fun��o que l� do arquivo bin�rio os dados de uma determinada partida. A fun��o deve
//ter como entrada os seguintes par�metros: (1) par�metro string com o nome do arquivo; (2)
//par�metro inteiro com o n�mero da partida a ser lida. A fun��o retorna o registro com os dados da
//partida que foi lida.

//

//Criar uma fun��o que imprime na tela todas as partidas (tabuleiros com as respectivas jogadas
//e quem ganhou) e o placar final (Ex: Maria 10 X Jos� 5) A Maria foi a campe� do Campeonato de
//Jogo da Velha!!!

//

//Utilize a criatividade para implementar o layout da impress�o na tela.
//Observa��o: Esta fun��o deve obrigatoriamente ler todos os dados do arquivo bin�rio e do arquivo
//txt para realizar a impress�o final do Campeonato!

//OBSERVA��O 1: VOC� PODER� CRIAR OUTRAS FUN��ES CASO DESEJAR, MAS A
//CRIA��O DAS FUN��ES DEFINIDAS ACIMA � OBRIGAT�RIA. CASO ALGUMA DAS FUN��ES
//ACIMA N�O FOR CRIADA IMPLICAR� EM PERDA DE NOTA.
//OBSERVA��O 2: AS EQUIPES DEVEM SER FORMADAS POR DOIS ALUNOS OU UM. OS
//NOMES DOS INTEGRANTES DA EQUIPE DEVEM SER INFORMADOS NO MOODLE, NO
//F�RUM ABERTO NA DISCIPLINA, AT� O DIA 01 DE NOVEMBRO DE 2018.
//OBSERVA��O 3: O CRONOGRAMA DE DEFESAS SER� DIVULGADO AT� O DIA 19/11/2019.
//CUIDADO !!!!!!!!!
//EM CASO DE C�PIA TODOS AS EQUIPES ENVOLVIDAS RECEBER�O NOTA ZERO
