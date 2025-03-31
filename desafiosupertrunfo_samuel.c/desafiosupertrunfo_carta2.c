#include <stdio.h>

int main(){
    char estado[9] = "Amazonas";
    char codigo[4] = "AO4";
    char cidade[7] = "Juruá";
    float populacao = 3.941;
    float area = 1.576;
    float PIB = 131.531;
    int pontos_turistico = 40;
    float densidade_populacional = 2500.63;
    float PIB_per_capta = 3337.50;


    printf("*** Divisões da Segunda Carta ***\n");
    float populacao_ = 3.941;     
    float area_ = 1.576;
    float quociente1 = populacao_ / area_;

    printf("Quociente da População e a Área de Amazonas é: %.5f\n", quociente1);

    float PIB_ = 131.531;
    float quociente2 = PIB_ / populacao_;

    printf("Quociente da PIB e a População de Amazonas é: %.4f\n", quociente2);

    printf("*** Segunda Carta ***\n");
    printf("O Estado é: %s\n", estado);
    printf("O codigo de %s é: %s\n", estado, codigo);
    printf("O nome da cidade de %s é: %s\n", estado, cidade);
    printf("A População da %s é: %.3f\n", estado, populacao);
    printf("A Área em quilômetros de %s é: %.3f\n", estado, area);
    printf("O PIB de %s é: %.3f\n", estado, PIB);
    printf("Os Pontos Turístico de %s é: %d\n", estado, pontos_turistico);
    printf("A Densidade Populacional de %s é: %.2f\n", estado, densidade_populacional);
    printf("O PIB per Papita de %s é: %.2f\n", estado, PIB_per_capta);

    return 0;

}