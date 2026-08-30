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




    //menssagem de aviso do programa finalizado com sucesso
    printf("*** Programa finalizado com sucesso ***\n");






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
    superpoder = (float)(populacao) + (area) + pib + turismo + pib + pibpercap + densidadepopul;
    printf(" O superpoder da sua primeira carta e: %4.f\n", superpoder);





    printf("*** Digitalizacao da primeira carta finalizada bom proveito ***\n");

    //INICIALIZAÇÃO SEGUNDA CARTA

    int turismo2, batalha1, batalha2;
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




    //menssagem de aviso do programa finalizado com sucesso
    printf("*** Programa finalizado com sucesso ***\n");






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
    superpoder2 = (float)(populacao2) + (area2) + pib2 + turismo2 + pib2 + pibpercap2 + densidadepopul2;
    printf("O superpoder da sua segunda carta e: %4.f\n", superpoder2);





    printf("*** Digitalizacao da segunda carta finalizada bom proveito ***\n");

    printf("*** BATALHA DE CARTAS INICIADA ***\n");

    printf("*** A carta como o menor valor de poder vence. ***\n");


    printf("Se a primeira batalha da carta 1 retornar igua a (1) a carta 1 e a vencedora.\n");
    printf("Se a segunda batalha da carta 2 retornar igual a (0) a carta 2 e a vencadora.\n");

    //BATALHA DE PONTOS TURISTICOS DAS CARTAS

    printf("A quantidade de populacao da primeira carta e (%lu) a da segunda carta e (%lu)\n", populacao, populacao2);
    batalha1 = populacao < populacao2;
    printf("Resultado da quantidade de populacao carta 1 e: %d\n", batalha1);
    batalha2 = populacao2 > populacao;
    printf("Resultado da quantidade de populacao carta 2 e: %d\n", batalha2);

    //BATALHA DE POPULAÇÃO DAS CARTAS

    printf("A quantidade de pontos turisticos primeira carta e (%d) a da segunda carta e (%d)\n", turismo, turismo2);
    batalha1 = turismo < turismo2;
    printf("Resultado pontos turisticos carta 1: %d\n", batalha1);
    batalha2 = turismo2 > turismo;
    printf("Resultado pontos turisticos carta 2: %d\n", batalha2);

    //BATALHA DA AREA DAS CARTAS

    printf("A quantidade de area primeira carta e (%.2f) a da segunda carta e (%.2f)\n", area, area2);
    batalha1 = area < area2;
    printf("Resultado quantidade de area carta 1: %d\n", batalha1);
    batalha2 = area2 > area;
    printf("Resultado quantidade de area carta 2: %d\n", batalha2);

    //BATALHA DO PIB DAS CARTAS

    printf("A quantidade de pib primeira carta e (%.2f) a da segunda carta e (%.2f)\n", pib, pib2);
    batalha1 = pib < pib2;
    printf("Resultado da quantidade de pib carta 1: %d\n", batalha1);
    batalha2 = pib2 > pib;
    printf("Resultado da quantidade de pib carta 2: %d\n", batalha2);

    //BATALHA DO PIB POR CAPITAL DAS CARTAS

    printf("A quantidade de pib por capital primeira carta e (%.2f) a da segunda carta e (%.2f)\n", pibpercap, pibpercap2);
    batalha1 = pibpercap < pibpercap2;
    printf("Resultado pib por capital carta 1: %d\n", batalha1);
    batalha2 = pibpercap2 > pibpercap;
    printf("Resultado pib por capital carta 2: %d\n", batalha2);

    //BATALHA DA DENSIDADE POR POPULAÇÃO DAS CARTAS

    printf("A quantidade de densidade populacional primeira carta e (%.2f) a da segunda carta e (%.2f)\n", densidadepopul, densidadepopul2);
    batalha1 = densidadepopul < densidadepopul2;
    printf("Resultado densidade populacional carta 1: %d\n", batalha1);
    batalha2 = densidadepopul2 > densidadepopul;
    printf("Resultado densidade populacional carta 2: %d\n", batalha2);

    //BATALHA DO SUPER PODER DAS CARTAS

    //COMPILADOR DE PONTOS PARA RESULTADO DA BATALHA

    printf("Se a primeira batalha da carta 1 retornar igua a (1) a carta 1 e a vencedora.\n");
    printf("Se a segunda batalha da carta 2 retornar igual a (0) a carta 2 e a vencadora.\n");

    printf("A quantidade de super poder da primeira carta e (%4.f) a da segunda carta e (%4.f)\n", superpoder, superpoder2);
    batalha1 = superpoder < superpoder2;
    printf("Resultado batalha de superpoder carta 1: %d\n", batalha1);
    batalha2 = superpoder2 > superpoder;
    printf("Resultado batalha de super poder carta 2: %d\n", batalha2);

    printf("Resultado final carta 1 = (%d). Resultado final carta 2 = (%d).\n", batalha1, batalha2);

    printf("***FIM DA BATALHA DE CARTAS***");
    
    
    return 0;


}
