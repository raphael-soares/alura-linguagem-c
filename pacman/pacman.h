#ifndef _PACMAN_H_
#define _PACMAN_H_

#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd'
#define BOMBA 'b'

int praondeofatansmavai(int xatual, int yatual, int *xdestino, int *ydestino);
void explodepilula2(int x, int y, int somax, int somay, int qtd);
void explodepilula();
void move(char direcao);
int acabou();
int ehdirecao(char direcao);

#endif
