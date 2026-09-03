#include <stdio.h>

int main(){

    int turismo;
    unsigned long int populacao;
    float area, pib, superpoder;
    double densidadepopul, pibpercap;
    char estado[50], cidade[50], codigo[50];

    //introdução do programa

    printf("*** Inicializando dados da sua primeira carta ***\n");




    //programa para receber dados sobre quantidade de pontos turistico.

    
    printf("Digite a quantidade de pontos turisticos da cidade desejada: \n");
    scanf("%d", &turismo );

    //programa para receber numero populacional da cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

   
    printf("Digite a quantidade de populacao da cidade desejada: \n");
    scanf("%lu", &populacao );

    //programa para receber dados sobre a área da sua cidade em klm².

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

   
    printf("Digite a quantidade de area da cidade desejada: \n");
    scanf("%f", &area );

    //programa para recer dados sobre o pib da sua cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    
    printf("Digite o pib da cidade desejada: \n");
    scanf("%f", &pib );

    //programa para receber o nome do estado.

    printf("Digite o nome do estado: \n");
    scanf(" %s", estado);


    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

   
    printf("Digite o nome da sua cidade desejada: \n");
    scanf(" %s", cidade);

    //programa para receber o codigo da sua carta.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    
    printf("Digite o codigo da sua carta desejada: \n");
    scanf(" %s", codigo);
    
    



    //menssagem de aviso da finalização do programa

    printf("*** Finalizando digitalizacao da sua primeira carta ***\n");

    printf("***PRIMEIRA CARTA FINALIZADA***\n");

    //compilador para exibição de dados.

    //adição de compilador com soma de fatores para exibição de dados
    

    printf("\n turismo carta 1: %d\n", turismo);
    printf("populacao carta 1: %lu\n", populacao);
    printf("area carta 1: %.2f\n pib carta 1: %.2f\n", area, pib);
    printf("estado carta 1: %s\n cidade carta 1: %s\n codigo carta 1: %s\n ", estado, cidade, codigo);
    densidadepopul = (double)(populacao) / area;
    printf("A densidade populacional por area da sua primeira carta e: %.2f\n", densidadepopul);
    pibpercap = (double)(pib) / populacao;
    printf(" A sua capital dividido por populcao da sua primeira carta e: %.2f\n", pibpercap);
    superpoder = (float)(populacao) + (area) + pib + turismo;
    printf(" O superpoder da sua primeira carta e: %4.f\n", superpoder);





    printf("*** Digitalizacao da primeira carta finalizada bom proveito ***\n");


    int turismo2;
    float area2, pib2, superpoder2;
    unsigned long int populacao2;
    double densidadepopul2, pibpercap2;
    char estado2[50], cidade2[50], codigo2[50];

    //introdução do programa

    printf("*** Inicializando dados da sua segunda carta ***\n");




    //programa para receber dados sobre quantidade de pontos turistico.

    printf("Digite a quantidade de pontos turisticos da cidade desejada: \n");
    scanf("%d", &turismo2 );

    //programa para receber numero populacional da cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite a quantidade de populacao da cidade desejada: \n");
    scanf("%lu", &populacao2 );

    //programa para receber dados sobre a área da sua cidade em klm².

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite a quantidade de area da cidade desejada: \n");
    scanf("%f", &area2 );

    //programa para recer dados sobre o pib da sua cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite o pib da cidade desejada: \n");
    scanf("%f", &pib2 );

    //programa para receber o nome do estado.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o nome do estado: \n");
    scanf(" %s", estado2);

    //programa para receber o nome da sua cidade.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o nome da sua cidade desejada: \n");
    scanf(" %s", cidade2);

    //programa para receber o codigo da sua carta.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o codigo da sua carta desejada: \n");
    scanf(" %s", codigo2);




    //menssagem de aviso da finalização do programa

    printf("*** Finalizando digitalizacao da sua segunda carta ***\n");

    printf("***SEGUNDACARTA FINALIZADA***\n");

    //compilador para exibição de dados.

    //adição de compilador com soma de fatores para exibição de dados
    

    printf("\n turismo carta 2: %d\n ", turismo2);
    printf("populacao carta 2: %lu\n", populacao2);
    printf("area carta 2: %.2f\n pib carta 2: %.2f\n ", area2, pib2);
    printf("estado carta 2: %s\n cidade carta 2: %s\n codigo carta 2: %s\n ", estado2, cidade2, codigo2);
    densidadepopul2 = (double)(populacao2) / area2;
    printf("A densidade populacional por area da sua segunda carta e: %.2f\n", densidadepopul2);
    pibpercap2 = (double)(pib2) / populacao2;
    printf("A sua capital dividido por populcao da sua segunda carta e: %.2f\n", pibpercap2);
    superpoder2 = (float)(populacao2) + (area2) + pib2 + turismo2;
    printf("O superpoder da sua segunda carta e: %4.f\n", superpoder2);



    printf("*** Digitalizacao da segunda carta finalizada bom proveito ***\n");



    printf("*** BATALHA DE CARTAS INICIADA ***\n");

    //BATALHA DE PONTOS TURISTICOS DAS CARTAS

    printf("A quantidade de populacao da primeira carta e (%lu) a da segunda carta e (%lu)\n", populacao, populacao2);

    // Compilador de resultado da batalha

    if ( populacao > populacao2){
        printf("Numero da populacao carta 1 venceu\n");
    } else {
        printf("Numero da populacao carta 2 venceu\n");
    };
    

    //BATALHA DE POPULAÇÃO DAS CARTAS

    printf("A quantidade de pontos turisticos primeira carta e (%d) a da segunda carta e (%d)\n", turismo, turismo2);

    //Compilador  de resultado da batalha

    if ( turismo > turismo2 ){
        printf("Numero de pontos turisticos carta 1 venceu\n");
    } else {
        printf("Numero de pontos turisticos carta 2 venceu\n");
    };
   
    //BATALHA DA AREA DAS CARTAS

    printf("A quantidade de area primeira carta e (%.2f) a da segunda carta e (%.2f)\n", area, area2);

    //Compilador de resultado da batalha

    if ( area > area2 ){
        printf("Numero da area carta 1 venceu\n");
    } else {
        printf("Numero da area carta 2 venceu\n");
    };
    

    //BATALHA DO PIB DAS CARTAS

    printf("A quantidade de pib primeira carta e (%.2f) a da segunda carta e (%.2f)\n", pib, pib2);

    //Compilador de resultado da batalha

    if ( pib > pib2 ){
        printf("Numero do pib carta 1 venceu\n");
    } else {
        printf("Numero do pib carta 2 venceu\n");
    };
    

    //BATALHA DO PIB POR CAPITAL DAS CARTAS

    printf("A quantidade de pib por capital primeira carta e (%.2f) a da segunda carta e (%.2f)\n", pibpercap, pibpercap2);

    //Compilador de resultado da batalha

    if ( pibpercap > pibpercap2 ){
        printf("Numero do pib por captal carta 1 venceu\n");
    } else {
        printf("Numero do pib por capital carta 2 venceu\n");
    };
    

    //BATALHA DA DENSIDADE POR POPULAÇÃO DAS CARTAS
    printf("Na batalha de densidade populacional o menor numero vence:\n");

    printf("A quantidade de densidade populacional primeira carta e (%.2f) a da segunda carta e (%.2f)\n", densidadepopul, densidadepopul2);

    //Compilador de resultado da batalha

    if ( densidadepopul < densidadepopul2 ){
        printf("Numero da densidade populacional carta 1 venceu\n");
    } else {
        printf("Numero da densidade populacional carta 2 venceu\n");
    };
    
    //BATALHA DO SUPER PODER DAS CARTAS
    printf("Super Poder e o numero total da soma dos fatores das cartas:\n");

    printf("A quantidade de super poder da primeira carta e (%4.f) a da segunda carta e (%4.f)\n", superpoder, superpoder2);

    //Compilador de resultado da batalha

    if ( superpoder > superpoder2 ){
        printf("SUPER PODER CARTA 1 VENCEU A BATALHA\n");
    } else {
        printf("SUPER PODER CARTA 2 VENCEU A BATALHA\n");
    };

    printf("***FIM DA BATALHA DE CARTAS***\n");


    //menssagem de aviso do programa finalizado com sucesso
    printf("*** PROGRAMA FINALIZADO COM SUCESSO ***\n");
    
    return 0;


}