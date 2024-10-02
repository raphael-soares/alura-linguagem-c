#include <stdio.h>

#define NUMERO_TENTATIVAS 5

int main() {
  // Imprime o cabeçalho do jogo
  printf("*******************---*******************\n");
  printf("* Bem vindo ao nosso jogo de advinhação *\n");
  printf("*******************---*******************\n");

  int numeroSecreto = 42;

  int chute;
  int ganhou = 0;
  int tentativas = 0;

  while (ganhou == 0) {

    printf("Tentativa %d\n", tentativas + 1);
    scanf("%d", &chute);
    printf("seu chute foi %d\n", chute);

    if (chute < 0) {
      printf("Você não pode chutar números negativos\n");
      continue;
    }

    int acertou = (numeroSecreto == chute);
    int maior = (chute > numeroSecreto);

    if (acertou) {
      printf("Parabens, você acertou!\n");
      ganhou = 1;
    } else if (maior) {
      printf("Seu chute foi maior que o número secreto\n");
    } else {
      printf("Seu chute foi menor que o número secreto\n");
    }

    tentativas = tentativas + 1;
  }
  printf("Fim de jogo\n");
  printf("Você acertou o jogo em %d tentativas", tentativas);

  return 0;
}
