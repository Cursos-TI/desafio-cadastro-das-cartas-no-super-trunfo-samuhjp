#include <stdio.h>
         
int main(){
      char estado[15] = "Espirito Santo";
      char codigo[4] = "AO3";
      char cidade[10] = "Guarapari";
      float populacao = 4.102;
      float area = 46.095;
      float PIB = 204.000;
      int pontos_turistico = 60;
      float densidade_populacional = 1123.72;
      float PIB_per_capta = 4973.18;


      printf("*** Divisões da Primeira Carta ***\n");

      float area_ = 46.095;
      float populacao_ = 4.102;
      float quociente1 = area_ / populacao_;

      printf("Quociente da área e a população de Espirito Santo é: %.4f\n", quociente1);

      float PIB_ = 204.000;
      float quociente2 = PIB_ / populacao_;

      printf("Quociente da PIB e a população de Espirito Santo é: %.4f\n", quociente2);

      
      printf("*** Primeira Carta ***\n");
      printf("O Estado é: %s\n", estado);
      printf("O codigo do %s é: %s\n", estado, codigo);
      printf("O nome da cidade de %s é: %s\n", estado, cidade);
      printf("A População da %s é: %.3f\n", estado, populacao);
      printf("A Área em quilômetros da %s é: %.3f\n", estado, area);
      printf("O PIB de %s é: %.3f\n", estado, PIB);
      printf("Os Pontos Turístico da %s é: %d\n", estado, pontos_turistico);
      printf("A Densidade Populacional de %s é: %.2f\n", estado, densidade_populacional);
      printf("O PIB per Capita de %s é: %.2f\n", estado, PIB_per_capta);


      return 0;
}
