#include <stdio.h>
#include <funcoes.h>
void aleta(){
    int i,j;
    for(i = 0; i < nla; i++){
        for(j = 0; j < nca; j++){
            a[i][j] = rand()%20;
        }
    }
}

void aletb(){
    int i,j;
    for(i = 0; i < nlb; i++){
        for(j = 0; j < ncb; j++){
            b[i][j] = rand()%20;
        }
    }
}
void elema(){
    int i,j;
    for(i = 0; i < nla; i++){
        for(j = 0; j < nca; j++){
            printf("Escreve o elemento %d,%d",i,j);
            scanf("%f", &a[i][j]);
        }
    }
}

void elemb(){
    int i,j;
    for(i = 0; i < nlb; i++){
        for(j = 0; j < ncb; j++){
            printf("Escreve o elemento %d,%d",i,j);
            scanf("%f", &b[i][j]);
        }
    }
}

void soma(){
    int i,j;
    if(nla==nlb && nca==ncb){
        for(i = 0; i < nla; i++){
            for(j = 0; j < ncb; j++){
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        nlc=nla;
        ncc=nca;
    }
    else{
        printf("O tamanho da matriz A ou B nao sao iguais, entao nao e possivel fazer a soma\n");
    }
}

void subst(){
    int i,j;
    if(nla==nlb && nca==ncb){
        for(i = 0; i < nla; i++){
            for(j = 0; j < ncb; j++){
                c[i][j] = a[i][j] - b[i][j];
            }
        }
        nlc=nla;
        ncc=nca;
    }
    else{
        printf("O tamanho da matriz A ou B nao sao iguais, entao nao e possivel fazer a substracao\n");
    }
}
void produto(){
    int i,j,k;
    if(nca==nlb){
        for(i = 0; i < nla; i++){
             for(j = 0; j < ncb; j++){
               c[i][j]=0;
               for(k = 0; k < nca; k++){
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
               }
             }
        }
        nlc=nla;
        ncc=ncb;}
    else{
        printf("Nao e possivel fazer o produto pois o numero de colunas de A e diferente do nnumero de linhas de B\n");
    }
}
void imprimira(){
    int i,j;
    for(i = 0; i < nla; i++){
        for(j = 0; j < nca; j++){
          printf("%7.2f", a[i][j]);
          }
        printf("\n\n");
    }
}

void imprimirb(){
    int i,j;
    for(i = 0; i < nlb; i++){
        for(j = 0; j < ncb; j++){
          printf("%7.2f", b[i][j]);
          }
        printf("\n\n");
    }
}

void imprimirc(){
    int i,j;
    for(i = 0; i < nlc; i++){
        for(j = 0; j < ncc; j++){
          printf("%7.2f", c[i][j]);
          }
        printf("\n\n");
    }
}

void arqreada(){
    FILE*f;
    int i,j;
    f = fopen("F:\Nova pasta\project2.cvs","r");
    for(i = 0; i < nla; i++){
        for(j = 0; j < nca; j++){
            scanf("%f", &a[i][j]);
            fprintf(f, "%f", a[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
}

void arqreadb(){
    FILE*f;
    int i,j;
    f = fopen("F:\Nova pasta\project2.cvs","r");
    for(i = 0; i < nlb; i++){
        for(j = 0; j < ncb; j++){
            scanf("%f", &b[i][j]);
            fprintf(f, "%f", b[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
}


void arqwritec(){
FILE*f;
int i, j;
f = open("c:\matriz","w");
for(i = 0; i < nlc; i++){
    for(j = 0; j < ncc; j++){
        scanf("%f", &c[i][j]);
        fprintf(f, "%f", c[i][j]);
}
    fprintf(f,"\n");
}
fclose(f);
}
