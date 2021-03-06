
#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H


typedef struct {
  unsigned int width, height;
  float *r, *g, *b;
} imagem;

imagem abrir_imagem(char *nome_do_arquivo);
void salvar_imagem(char *nome_do_arquivo, imagem *I);
void liberar_imagem(imagem *i);
void brilho_colunas(imagem *I, float n);
void brilho_linhas(imagem *I, float n);
void brilho_multithreads(imagem *I, float n, int num_threads);
void brilho_multiprocessos(imagem *I, float n, int num_processos);
void valor_maximo(imagem *I);

#endif
