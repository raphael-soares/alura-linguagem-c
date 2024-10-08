
#ifndef _MAPA_H_
#define _MAPA_H_

#define HEROI '@'
#define FANTASMA 'F'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define PILULA 'P'

struct mapa {
    char **matriz;
    int linhas;
    int colunas;
};

struct posicao {
    int x;
    int y;
};

typedef struct mapa MAPA;
typedef struct posicao POSICAO;

void liberamapa(MAPA *m);
void andanomapa(MAPA *m, int xorigem, int yorigem, int xdestino, int ydestino);
void copiamapa(MAPA *origem, MAPA *destino);
void alocamapa(MAPA *m);
void lemapa(MAPA *m);
int encontramapa(MAPA *m, POSICAO *p, char c);
int ehparede(MAPA *m, int x, int y);
int ehvalida(MAPA *m, int x, int y);
int ehvazia(MAPA *m, int x, int y);
int podeandar(MAPA *m, char personagem, int x, int y);

int ehpersonagem(MAPA *m, char personagem, int x, int y);
#endif
