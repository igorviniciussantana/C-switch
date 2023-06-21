

/*Criar um algoritmo para ler o preço e a categoria de um produto. Calcular e mostrar o
reajuste de acordo com a categoria. Se for: A = 50%, B = 25% , C=15 % e outras 5%. */




int main()
{
    int categoria;
    float preco;


    printf("Insira o preço do produto\n");
    scanf("%f", &preco);

    printf("Insira a categoria do produto\n");
    printf("\n1- Categoria A\n");
    printf("\n2- Categoria B\n");
    printf("\n3- Categoria C\n");
    printf("\n4- Outras\n");
    scanf("%d", &categoria);


    switch(categoria)
    {
        case 1:
        printf("Seu reajuste é de 50 por cento, totalizando: R$%.1f", preco * 1.5);
        break;
        case 2:
        printf("Seu reajuste é de 25 por cento, totalizando: R$%.1f", preco * 1.25);
        break;
        case 3:
        printf("Seu reajuste é de 15 por cento, totalizando: R$%.1f", preco * 1.15);
        break;
        case 4:
        printf("Seu reajuste é de 5 por cento, totalizando: R$%.1f", preco * 1.05);
        break;
        default:
        printf("Seu reajuste é de 5 por cento, totalizando: R$%.1f", preco * 1.05);
        break;

    }

return 0;

}
