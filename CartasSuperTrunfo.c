#include <stdio.h>

int main(){
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;
    // sintaxe scanf
    //scanf("formato1" "formato2, &variavel1, variavel2, ...);

    printf("digite seu estado: \n");
    scanf("%s", &estado);
    

    printf("digite seu codigo: \n");
    scanf("%s", &codigo);
    

    printf("digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("populacao: \n");
    scanf("%d", &populacao);
    
    printf("area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);    
    
    printf("numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);   
    
    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("nome da cidade: %s\n", cidade);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);


    printf("digite seu estado: \n");
    scanf("%s", &estado);
    

    printf("digite seu codigo: \n");
    scanf("%s", &codigo);
    

    printf("digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("populacao: \n");
    scanf("%d", &populacao);
    
    printf("area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);    
    
    printf("numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);   
    
    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("nome da cidade: %s\n", cidade);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);




/*
    printf ("formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    
    %d: impprime um inteiro no formato decial.
    %i: equivalente a %d
    %f: imprime um numero de ponto flutuante no formato padrao.
    %e: imprime um numero de ponto flutuante na notacao cientifica.
    %c: imprime um unico caractere.
    %s: imprime uma cadeia (string) de caracteres.
    */

    printf("novo commit\n");
    
    return 0;

}