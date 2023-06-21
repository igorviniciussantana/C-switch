/*Faça um algoritmo/programa em C que simule uma calculadora com as quatro
operações básicas (adição, subtração, multiplicação e divisão). Deve ser solicitado ao
usuário a entrada dos dois operandos e da operação a ser executada, na forma de um
menu. Dependendo da operação escolhida, deve ser executada a operação solicitada e
ser esccrito o seu resultado.*/




int main()
{
    int num1, num2, opcao;

    printf("Insira o Primeiro Número\n");
    scanf("%d", &num1);

    printf("Insira o Segundo Número\n");
    scanf("%d", &num2);


    printf("\n1- Soma\n");
    printf("\n2- Subtração\n");
    printf("\n3- Multiplicação\n");
    printf("\n4- Divisão\n");
    printf("\nEscolha a opção (1 a 4):");
    scanf("%d", &opcao);
    switch(opcao)
{
case 1:
printf("Soma: %d", num1 + num2);
break;
case 2:
printf("Subtração: %d", num1 - num2);
break;
case 3:
printf("Multiplicação: %d", num1 * num2);
break;
case 4:
printf("Divisão: %d", num1 / num2);


}

return 0;

}
