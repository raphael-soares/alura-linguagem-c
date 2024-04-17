#include <stdio.h>

int main() {
  // Imprime o cabeçalho do jogo 
  printf("*******************---*******************\n");
  printf("* Bem vindo ao nosso jogo de advinhação *\n");
  printf("*******************---*******************\n");

  int numeroSecreto = 42; 
  int chute;
  int numeroTentaivas = 3;  

  for(int i = 1; i<=numeroTentaivas; i++){
    printf("Tentativa %d de %d\n", i, numeroTentaivas  );
    printf("Qual é o seu chute?\n");

    scanf("%d", &chute);
    printf( "seu chute foi %d\n", chute);

    int acertou = (numeroSecreto == chute);

    if(acertou){
      printf("Parabens você acertou!!!!\n");
      break;
    }
    else {

      printf("Que pena, você errou :(\n");

      int maior = (chute > numeroSecreto);

      if (maior){
        printf("Seu chute foi maior que o número secreto\n");
      }
      else{
        printf("Seu chute foi menor que o número secreto\n");
      }
    }


  }
  return 0;
}
