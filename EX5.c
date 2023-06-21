
/*Ler o pedido de um cliente de fast food, baseado no menu abaixo, e imprimir o preço
total e a opção que ele escolher. */




int main()
{
    int opcao;


    printf("\n1- Big Super Sanduba\n");
    printf("\n2- Quase Super Sanduba\n");
    printf("\n3- Mirradus Sanduba\n");
    printf("\nEscolha a opção (1 a 3):");
    scanf("%d", &opcao);
    switch(opcao)
    {
        case 1:
        printf("Você Escolheu:\n");
        printf("Big Super Sanduba\n");
        printf("2 hambúrgueres, queijo, batata fritas e refrigerante\n");
        printf("5,00\n");
        break;

        case 2:
        printf("Você Escolheu:\n");
        printf("Quase Super Sanduba\n");
        printf("1 hambúrguer, batata fritas e refrigerante\n");
        printf("3,00\n");
        break;

        case 3:
        printf("Você Escolheu:\n");
        printf("Mirradus Sanduba\n");
        printf("1 misto quente e refrigerante\n");
        printf("1,50\n");
        break;



    }

return 0;

}
