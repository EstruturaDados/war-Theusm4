#include <stdio.h>
#include <string.h>

/*
    Definição da struct Territorio
    Agrupa informações relacionadas a cada território:
    - nome: nome do território
    - cor: cor do exército
    - tropas: quantidade de tropas
*/
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {

    // Vetor de 5 elementos do tipo Territorio
    Territorio territorios[5];

    printf("==== Cadastro de Territórios ====\n\n");

    // Laço para entrada de dados dos territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d\n", i + 1);

        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Linha em branco para melhorar a visualização
    }

    // Exibição dos dados cadastrados
    printf("\n==== Territórios Cadastrados ====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("------------------------------\n");
    }

    return 0;
}
