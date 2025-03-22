#include <stdio.h>

//Dados da Carta 1
char estado1[10];
char city1[10];
char cdg1[3];
unsigned int pop1;
float pib1;
int pts1;
float area;
float densidade1;
double capita1; 

//contador
int contadorA;
int contadorB;

//Dados da Carta 2
char estado2[10];
char cdg2[3];
char city2[10];
unsigned int pop2;
float pib2;
int pts2;
float area2;
float densidade2;
double capita2;


int main(){

    //Obtenção dos dados da Carta 1
    printf("Digite o Estado da Carta 1: \n"); 
    scanf("%s", estado1);

    printf("Digite a cidade da Carta 1: \n");
    scanf("%s", city1);

    printf("Digite o Codigo da Carta 1: \n");
    scanf("%s", cdg1);

    printf("Digite a população da Carta 1: \n");
    scanf("%d", &pop1);

    printf("Digite a quantidade de pontos turisticos da Carta 1: \n");
    scanf("%d", &pts1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite a area da Carta 1: \n");
    scanf("%f", &area);

    densidade1 = pop1 / area;
    capita1 = pib1 / area;

    //Obtenção dos Dados da Carta 2
    printf("Digite o Estado da Carta 2: \n");
    scanf("%s", estado2);

    printf("Digite a cidade da Carta 2: \n");
    scanf("%s", city2);

    printf("Digite o Codigo da Carta 2: \n");
    scanf("%s", cdg2);

    printf("Digite a população da Carta 2: \n");
    scanf("%d", &pop2);

    printf("Digite a quantidade de pontos turisticos da Carta 2: \n");
    scanf("%d", &pts2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a area da Carta 2: \n");
    scanf("%f", &area2);

    densidade2 = pop2 / area2;
    capita2 = pib2 / area2;

    //Comparações com if else
    //Usei um int como contador para determinar a carta vencedora

    if (pop1 > pop2) {
        printf("\nPopulação: %d - Carta 1 Venceu\n", pop1);
        contadorA++;

    } else {
        printf("\nPopulação: %d - Carta 2 Venceu: %d\n", pop2);
        contadorB++;
    }

    if (pib1 > pib2){
        printf("\nPIB: %f - Carta 1 Venceu\n", pib1);
        contadorA++;

    } else{
        printf("\nPIB: %f - Carta 2 Venceu\n", pib2);
        contadorB++;
    }

    if (pts1 > pts2){
        printf("\n Pontos Turisticos: %d - Carta 1 Venceu", pts1);
        contadorA++;

    } else{
        printf("\nPontos Turisticos: %d - Carta 2 Venceu\n", pts2);
        contadorB++;
    }

    if (area > area2){
        printf("\nÁrea: %f - Carta 1 Venceu",area);
        contadorA++;

    } else{
        printf("\nÁrea: %f - Carta 2 Venceu\n",area2);
        contadorB++;
    }

    if (densidade1 < densidade2){
        printf("\nDensidade Demográfica: %f - Carta 1 Venceu\n", densidade1);
        contadorA++;

    } else{
        printf("\nDensidade Demográfica: %f - Carta 2 Venceu\n", densidade2);
        contadorB++;
    }

    if (capita1 > capita2){
        printf("\nPIB per Capita: %f - Carta 1 Vence\n", capita1);
        contadorA++;
    } else{
        printf("\nPIB per Capita: %f - Carta 2 Vence\n",capita2);
        contadorB++;
    }

    if (contadorA > contadorB){
        printf("\nCarta 1 é a vencedora\n");

    }else if (contadorB < contadorA) {
        printf("\nCarta 2 é a vencedora\n");

    }else{
        printf("\nEmpate!\n");
    }



    return 0;
}
