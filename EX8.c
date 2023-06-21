


/*Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. */




int main()
{
    int codigo, quantidade;

    printf("Insira o código do produto\n");
    printf("100 - Cachorro quente\n");
    printf("101 - Bauru simples\n");
    printf("102 - Bauru c/ovo\n");
    printf("103 - Hamburger\n");
    printf("104 - Cheeseburger\n");
    printf("105 - Refrigerante\n");
    scanf("%d", &codigo);

    printf("Insira a quantidade do produto\n");
    scanf("%d", &quantidade);




    switch(codigo)
    {
        case 100:
        printf("O total do seu pedido é: R$%.1f", 1.1 * quantidade);
        break;
        case 101:
        printf("O total do seu pedido é: R$%.1f", 1.3 * quantidade);
        break;
        case 102:
        printf("O total do seu pedido é: R$%.1f", 1.5 * quantidade);
        break;
        case 103:
        printf("O total do seu pedido é: R$%.1f", 1.1 * quantidade);
        break;
        case 104:
        printf("O total do seu pedido é: R$%.1f", 1.3 * quantidade);
        break;
        case 105:
        printf("O total do seu pedido é: R$%.1f", 1 * quantidade);
        break;
        default:
        printf("Entrada Inválida");
        break;

    }

return 0;

}
