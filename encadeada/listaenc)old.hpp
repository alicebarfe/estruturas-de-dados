#ifndef LISTAENC_HPP
#define LISTAENC_HPP

// declara��o pr�via da estrutura Noh, que representa
// cada elemento da lista
struct Noh;

// declara��o pr�via da estrutura de uma lista
struct ListaEnc;

ListaEnc* criarLista();
void liberarLista(ListaEnc* lista);
bool estahVazia(ListaEnc* lista);
void inserir(ListaEnc* lista, int item, int pos);
int remover(ListaEnc* lista, int pos);
int obterElemento(ListaEnc* lista, int pos);
int obterTamanho(ListaEnc *lista);

#endif // LISTAENC_HPP
