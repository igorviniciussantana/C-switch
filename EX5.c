
/*Ler o pedido de um cliente de fast food, baseado no menu abaixo, e imprimir o pre�o
total e a op��o que ele escolher. */




int main()
{
    int opcao;


    printf("\n1- Big Super Sanduba\n");
    printf("\n2- Quase Super Sanduba\n");
    printf("\n3- Mirradus Sanduba\n");
    printf("\nEscolha a op��o (1 a 3):");
    scanf("%d", &opcao);
    switch(opcao)
    {
        case 1:
        printf("Voc� Escolheu:\n");
        printf("Big Super Sanduba\n");
        printf("2 hamb�rgueres, queijo, batata fritas e refrigerante\n");
        printf("5,00\n");
        break;

        case 2:
        printf("Voc� Escolheu:\n");
        printf("Quase Super Sanduba\n");
        printf("1 hamb�rguer, batata fritas e refrigerante\n");
        printf("3,00\n");
        break;

        case 3:
        printf("Voc� Escolheu:\n");
        printf("Mirradus Sanduba\n");
        printf("1 misto quente e refrigerante\n");
        printf("1,50\n");
        break;



    }

return 0;

}
