#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

struct Produto {
    int codigo;
    char nome[50];
    char categoria[50];
    char fornecedor[50];
    char fabricacao[20];
    char validade[20];
    char local[50];
};

struct Produto inventario[MAX_ITEMS];
int totalItems = 0;

void addProduto() {
    printf("Enter product details:\n");
    printf("Codigo: ");
    scanf("%d", &inventario[totalItems].codigo);
    printf("Nome: ");
    scanf("%s", inventario[totalItems].nome);
    printf("Categoria: ");
    scanf("%s", inventario[totalItems].categoria);
    printf("fornecedor: ");
    scanf("%s", inventario[totalItems].fornecedor);
    printf("Fabricacao: ");
    scanf("%s", inventario[totalItems].fabricacao);
    printf("validade: ");
    scanf("%s", inventario[totalItems].validade);
    printf("Local: ");
    scanf("%s", inventario[totalItems].local);

    totalItems++;
}

void listarprodutos() {
    printf("Lista de produtos:\n");
    for (int i = 0; i < totalItems; i++) {
        printf("%d, %s, %s, %s, %s, %s, %s\n", inventario[i].codigo, inventario[i].nome, inventario[i].categoria, inventario[i].fornecedor, inventario[i].fabricacao, inventario[i].validade, inventario[i].local);
    }
}

// Implementar as funções de busca, edição e remoção de itens

int main() {
    int opcao;

    do {
        printf("\nsistema de gerenciamento de estoque\n");
        printf("1. Add Produto\n");
        printf("2. Listar produtos\n");
        printf("3. procurar produto\n");
        printf("4. Editar produtot\n");
        printf("5. Remover produto\n");
        printf("6. sair\n");
        printf("insira a opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                addProduto();
                break;
            case 2:
                listarprodutos();
                break;
            // Implementar os casos para busca, edição e remoção de itens
            case 6:
                printf("saindo. ate mais!\n");
                break;
            default:
                printf("opção invalida. por favor tente novamente.\n");
        }
    } while(opcao != 6);

    return 0;
}
