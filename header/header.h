#ifndef header
#define header

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TotalProdutos 100
#define Estoque "estoque.bin"
#define RelatorioEstoque "relatorio_estoque.txt"

// Estrutura para representar um Produto
typedef struct {
    int codigo;
    char nome[50];
    char descricao[150];
    int quantidade;
    float preco;
} Produto;

typedef struct {
    Produto produtos[TotalProdutos];
    int qtd;
} ListaDeProdutos;

int NovoProduto(ListaDeProdutos *lt);
int DeletarProduto(ListaDeProdutos *lt);
int AlterarProduto(ListaDeProdutos *lt);
void lisProduto(ListaDeProdutos *lt);
int consulProduto(ListaDeProdutos *lt);

int RegistrarEntrada(ListaDeProdutos *lt);
int RegistrarSaida(ListaDeProdutos *lt);

int CarregarProdutos(ListaDeProdutos *lt, const char *nomeArquivo);
int cadastrarProduto(ListaDeProdutos *lt, const char *nomeArquivo);
int GerarRelatorio(ListaDeProdutos *lt, const char *nomeArquivo);
void MostrarRelatorio(const char *nomeArquivo);

void menu();

int BuscarProdutoPorCodigo(ListaDeProdutos *lt, int codigo);

#endif