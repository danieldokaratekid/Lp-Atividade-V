#include <stdio.h>
int main()
{
    struct dados_livro
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        int preco;
    };

    struct dados_livro livro[2];
    int i;
    int opcao;
    int escolhalivro;
    int adicionar;
    int quantidadedelivros;

    for (i = 0; i < 2; i++)
    {
        struct dados_livro livro[2];
        printf("Deseja adicionar um livro no sistema?\n");
        scanf("%d", &adicionar);
        switch (adicionar)
        {
        case 1:
            fflush(stdin);
            printf("1-Para escolher o primeiro livro digitado\n");
            printf("2-Para escolher o segundo livro digitado\n");
            printf("Digite o nome do livro:\n");
            gets(livro[i].nome);
            printf("Digite o nome do autor:\n");
            gets(livro[i].autor);
            printf("Digite a categoria do livro:\n");
            gets(livro[i].categoria);
            printf("Digite o preco do livro:\n");
            scanf("%d", &livro[i].preco);
            break;
        case 2:
            printf("Saindo do sistema.......");
            break;
        }
        fflush(stdin);
        printf("\nExibindo os dados:\n");
        printf("nome:%s\n", livro[i].nome);
        printf("autor:%s\n", livro[i].autor);
        printf("categoria:%s\n", livro[i].categoria);
        printf("preco:%d\n", livro[i].preco);
    }
    quantidadedelivros++;
    if (livro[i].preco > 40)
    {
        printf("O Livro nao esta na promocao\n");
    }
    else if (livro[i].preco < 40)
    {
        printf("O Livro esta na promocao\n");
    }
    return 0;
}