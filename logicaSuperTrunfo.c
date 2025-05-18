#include <stdio.h>

int main() {
    printf("Desafio de Cartas Super Trunfo - Países\n");
    char estado1[4];
    char estado2[4]; 
    char codigo1[6];
    char codigo2[6];
    char nomecidade1[50], nomecidade2[50];
    float areakm1, areakm2;
    float PIB1, PIB2;
    float densidadepop1, densidadepop2; 
    float pibpc1, pibpc2; 
    int populacao1, populacao2; 
    int ptsturisticos1, ptsturisticos2; 

    printf("O jogo Super Trunfo começa agora! Insira os dados das cartas\n\n"); 

    //Dados da Carta 1 que serão digitados pelo usuário 
    printf("Carta 1\n");

    printf("Represente o nome do estado 1 com duas letras:\n");
    scanf("%s", estado1);

    printf("Digite o código da carta de 01 a 04 - Exemplo: A01, B03...\n");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade 1: \n"); 
    scanf("%s", nomecidade1); 

    printf("Digite a área em KM quadrados da cidade 1: \n");
    scanf("%f", &areakm1); 

    printf("Digite o PIB da cidade 1: \n"); 
    scanf("%f", &PIB1);

    printf("Digite o número da população da cidade 1: \n"); 
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &ptsturisticos1);
    //fim da entrada de dados da carta 1

    //Dados da carta 2 que serão digitados pelo usuário
    
    printf("Carta 2:\n"); 

    printf("Represente o nome do estado 2 com duas letras:\n");
    scanf("%s", estado2);


    printf("Digite o código da carta de 01 até 04 - Exemplo: A01, B03...\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nomecidade2); 

    printf("Digite a área em KM quadrados da cidade 2: \n");
    scanf("%f", &areakm2); 

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &PIB2); 

    printf("Digite o número da população da cidade 2:\n"); 
    scanf("%d", &populacao2); 

    printf("Digite o número de pontos turísticos da cidade 2:\n"); 
    scanf("%d", &ptsturisticos2);
    
    //fim da entrada de dados da carta 2 

    //cálculo da densidade populacional
    densidadepop1 = populacao1 / areakm1; 
    densidadepop2 = populacao2 / areakm2; 

    //cálculo PIB Per Capita
    pibpc1 = PIB1 / populacao1; 
    pibpc2 = PIB2 / populacao2; 


    //Dados que serão exibidos na tela após preenchimento do usuário da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", areakm1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de pontos turísticos: %d \n", ptsturisticos1);
    printf("Densidade Populacional: %f hab/km² \n", densidadepop1);
    printf("PIB Per Capita: %f reais \n\n", pibpc1);
    //fim da exibição dos dados da carta 1
    

    //Dados que serão exibidos na tela após preenchimento do usuário da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", areakm2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de pontos turísticos: %d \n", ptsturisticos2);
    printf("Densidade Populacional: %f hab/km² \n", densidadepop2);
    printf("PIB Per Capita: %f reais \n", pibpc2);
    //fim da exibição dos dados da carta 2 
  
    //comparação entre valores das cartas
    printf("Comparação entre as cartas:\n");

    if (populacao1 > populacao2) {
        printf("A carta 1 venceu pois possui maior população\n");
    } else if (populacao1 < populacao2) {
        printf("A carta 2 venceu pois possui maior população\n");
    } else {
        printf("As duas cartas empataram pois possuem mesmo valor de população\n");
    }


    return 0;
}