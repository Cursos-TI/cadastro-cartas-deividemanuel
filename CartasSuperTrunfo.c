#include <stdio.h>

int main(){

    int turismo, populacao;
    float area, pib;
    char estado[50], cidade[50], codigo[50];

    //programa para receber dados sobre quantidade de pontos turistico.

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &turismo );

    //programa para receber numero populacional da cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite a quantidade de populacao: \n");
    scanf("%d", &populacao );

    //programa para receber dados sobre a área da sua cidade em klm².

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite a quantidade de area: \n");
    scanf("%f", &area );

    //programa para recer dados sobre o pib da sua cidade.

    //obs: não use (.) para separar os numeros causa erro na leitura do codigo, escreva o numero sem espaços.

    printf("Digite o pib: \n");
    scanf("%f", &pib );

    //programa para receber o nome do estado.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o nome do estado: \n");
    scanf(" %s", estado);

    //programa para receber o nome da sua cidade.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);

    //programa para receber o codigo da sua carta.

    //obs: não use assentos como : (~,^,.,`,´,ç)etc, causa erro na leitura de codigo

    printf("Digite o codigo da sua carta: \n");
    scanf(" %s", codigo);

    //compilador para exibição de dados.

    printf("\n turismo: %d\n populacao: %d\n ", turismo, populacao);
    printf("area: %.2f\n pib: %.2f\n ", area, pib);
    printf("estado: %s\n cidade: %s\n codigo: %s\n ", estado, cidade, codigo);

    return 0;


}