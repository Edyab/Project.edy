#include <stdio.h>
#include <stdlib.h>
#include <funcoes.h>

void menu(void){
    int operacao;

    printf("(1) Definir o tamanho da matriz A\n");
    printf("(2) Definir o tamanho da matriz B\n");
    printf("(3) Preencher a matriz A com valores aleatorios\n");
    printf("(4) Preencher a matriz B com valores aleatorios\n");
    printf("(5) Atribuir valores manualmente para os elementos da matriz A\n");
    printf("(6) Atribuir valores manualmente para os elementos da matriz B\n");
    printf("(7) Calcular A+B\n");
    printf("(8) Calcular A-B\n");
    printf("(9) Calcular A*B\n");
    printf("(10) Imprimir matriz A\n");
    printf("(11) Imprimir matriz B\n");
    printf("(12) Imprimir matriz C\n");
    printf("(13) Ler a matriz A de um arquivo\n");
    printf("(14) Ler a matriz B de um arquivo\n");
    printf("(15) Escrever a matriz C em um arquivo\n");
    printf("(16) Sair\n\n");

    printf("Digite sua operacao:");
    scanf("%d", &operacao);

    switch (operacao){
    case 1:
        printf("Quantidade de linhas de A:\n");
        scanf("%d", &nla);
        printf("Quantidade de colunas de A:\n");
        scanf("%d", &nca);
        break;
    case 2:
        printf("Quantidade de linhas de B:\n");
        scanf("%d", &nlb);
        printf("Quantidade de colunas de B:\n");
        scanf("%d", &ncb);
        break;
    case 3:
        aleta();
        break;
    case 4:
        aletb();
        break;
    case 5:
       elema();
        break;
    case 6:
       elemb();
        break;
    case 7:
       soma();
        break;
    case 8:
       subst();
        break;
    case 9:
       produto();
        break;
    case 10:
       imprimira();
        break;
    case 11:
       imprimirb();
        break;
    case 12:
       imprimirc();
        break;
    case 13:
        arqreada();
        break;
    case 14:
        arqreadb();
        break;
    case 15:
        arqwritec();
        break;
    case 16:
        exit(0);
   // default:
        //printf("opcao inexistente\n");
        break;
    }
}



int main(){
    do{
        menu();
    }
    while(16);
    return 0;
}
