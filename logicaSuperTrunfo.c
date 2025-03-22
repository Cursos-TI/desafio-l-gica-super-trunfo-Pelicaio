#include <stdio.h>

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

    if (pop1 > pop2) {
        printf("Carta 1 Venceu: %d", pop1);
        contadorA++;

    } else {
        printf("Carta 2 Venceu: %d", pop2);
        contadorB++;
    }

    if (pib1 > pib2){
        printf("Carta 1 Venceu: %f", pib1);
        contadorA++;

    } else{
        printf("Carta 2 Venceu: %f", pib2);
        contadorB++;
    }

    if (pts1 > pts2){
        printf("Carta 1 Venceu: %d", pts1);
        contadorA++;

    } else{
        printf("Carta 2 Venceu: %d", pts2);
        contadorB++;
    }

    if (area > area2){
        printf("Carta 1 Venceu: %f",area);
        contadorA++;

    } else{
        printf("Carta 2 Venceu: %f",area2);
        contadorB++;
    }

    if (densidade1 < densidade2){
        print("Carta 1 Venceu: %f", densidade1);
        contadorA++;

    } else{
        printf("Carta 2 Venceu: %f", densidade2);
        contadorB++;
    }

    if (contadorA > contadorB){
        printf("Carta 1 é a vencedora");

    }else {
        printf("Carta 2 é a vencedora");
    }






    return 0;
}
