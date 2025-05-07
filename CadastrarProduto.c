#include "header/header.h"

int cadastrarProduto(ListaDeProdutos *lt, const char *nomeArquivo) {
    FILE *fp = fopen(nomeArquivo,
                     "wb"); // Abre para escrita binária (cria ou sobrescreve)
    if (fp == NULL) {
      printf("Nao foi possivel abrir/criar o arquivo '%s' para salvar!\n",
             nomeArquivo);
      perror(
          "erro:");
      return 1;
    }
  
    // Escreve toda a estrutura ListaDeProdutos (o array e a quantidade) no
    // arquivo
    fwrite(lt, sizeof(ListaDeProdutos), 1, fp);
    fclose(fp); // Fecha o arquivo
    return 0;   // Sucesso
  }