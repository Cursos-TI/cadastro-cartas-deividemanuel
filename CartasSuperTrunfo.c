#include <stdio.h>

int main(){

    int turismo, populacao;
    float area, pib;
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
    scanf("%d", &populacao );

    //programa para receber dados sobre a área da sua cidade em klm².

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite a quantidade de area da cidade desejada: \n");
    scanf("%f", &area );

    //programa para recer dados sobre o pib da sua cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite o pib da cidade desejada: \n");
    scanf("%f", &pib );

    //programa para receber o nome do estado.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o nome do estado: \n");
    scanf(" %s", estado);

    //programa para receber o nome da sua cidade.

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






    printf("***CARTA FINALIZADA***\n");

    //compilador para exibição de dados.

    //adição de compilador com soma de fatores para exibição de dados
    

    printf("\n turismo: %d\n populacao: %d\n ", turismo, populacao);
    printf("area: %.2f\n pib: %.2f\n ", area, pib);
    printf("estado: %s\n cidade: %s\n codigo: %s\n ", estado, cidade, codigo);
    densidadepopul = (double)(populacao) / area;
    printf("A densidade populacional por area e: %.2f\n", densidadepopul);
    pibpercap = (double)(pib) / populacao;
    printf(" A sua capital dividido por populcao e: %.2f\n", pibpercap);






    printf("*** Digitalizacao da primeiracarta finalizada bom proveito ***\n");

    return 0;


}

#include <stdio.h>

int main(){

    int turismo, populacao;
    float area, pib;
    double densidadepopul, pibpercap;
    char estado[50], cidade[50], codigo[50];

    //introdução do programa

    printf("*** Inicializando dados da sua segunda carta ***\n");




    //programa para receber dados sobre quantidade de pontos turistico.

    printf("Digite a quantidade de pontos turisticos da cidade desejada: \n");
    scanf("%d", &turismo );

    //programa para receber numero populacional da cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite a quantidade de populacao da cidade desejada: \n");
    scanf("%d", &populacao );

    //programa para receber dados sobre a área da sua cidade em klm².

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite a quantidade de area da cidade desejada: \n");
    scanf("%f", &area );

    //programa para recer dados sobre o pib da sua cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite o pib da cidade desejada: \n");
    scanf("%f", &pib );

    //programa para receber o nome do estado.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o nome do estado: \n");
    scanf(" %s", estado);

    //programa para receber o nome da sua cidade.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o nome da sua cidade desejada: \n");
    scanf(" %s", cidade);

    //programa para receber o codigo da sua carta.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o codigo da sua carta desejada: \n");
    scanf(" %s", codigo);




    //menssagem de aviso da finalização do programa

    printf("*** Finalizando digitalizacao da sua segunda carta ***\n");




    //menssagem de aviso do programa finalizado com sucesso
    printf("*** Programa finalizado com sucesso ***\n");






    printf("***CARTA FINALIZADA***\n");

    //compilador para exibição de dados.

    //adição de compilador com soma de fatores para exibição de dados
    

    printf("\n turismo: %d\n populacao: %d\n ", turismo, populacao);
    printf("area: %.2f\n pib: %.2f\n ", area, pib);
    printf("estado: %s\n cidade: %s\n codigo: %s\n ", estado, cidade, codigo);
    densidadepopul = (double)(populacao) / area;
    printf("A densidade populacional por area e: %.2f\n", densidadepopul);
    pibpercap = (double)(pib) / populacao;
    printf(" A sua capital dividido por populcao e: %.2f\n", pibpercap);






    printf("*** Digitalizacao da segundacarta finalizada bom proveito ***\n");

    return 0;


}